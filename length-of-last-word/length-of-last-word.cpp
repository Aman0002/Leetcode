class Solution {
public:
    int lengthOfLastWord(string A) {
        
        int cnt = 0, i = A.size()-1 ;
    
    while (i>0 && A[i]==' ')
        i--;

    for (;i>=0 ;i--)
    {
        if (A[i]!=' ')
            cnt++;
        else
            break;
    }
    
    return cnt;
    }
};