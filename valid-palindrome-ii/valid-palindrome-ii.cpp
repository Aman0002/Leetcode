class Solution {
public:
    bool is_pallindrome (string s ,int si ,int ei)
{
    while (si<ei)
    {
        if (s[si++]!=s[ei--])
            return false;
    }
    
    return true;
}
    bool validPalindrome(string A) {
        
         int i = 0, j = A.size()-1;

    while (i<j)
    {
        if (A[i]==A[j])
        {
            i++;
            j--;
        }else 
        {
            return is_pallindrome(A,i+1,j) || is_pallindrome (A,i,j-1);
        }
    }
    
    
    return 1;
        
    }
};