class Solution {
public:
    int strStr(string A, string B) {
        
        
        if (B.size()==0 )
        return 0;
        
    int idx = -1;
    for (int i=0 ;i<A.size() ;i++)
    {
        int k = i , j= 0;
        while (j<B.size() && k<A.size() && A[k]==B[j])
        {
            k++;
            j++;
        }
        
        if (j==B.size())
        {
            return i;
        }
        
    }

    return idx;
    }
};