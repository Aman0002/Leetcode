class Solution {
public:
    string longestPalindrome(string s) {
        
        int n = s.size();
        
        int max = INT_MIN;
        string res = "";
        int si , ei;
        for (int i=0 ;i<n ;i++)
        {
            int l = i;
            int r = i;
            //we will check first for the ODD LENGTH
            while (l>=0 &&r<n &&s[l]==s[r])
            {
                if (r-l+1>max)
                {
                    max = r-l+1;
                    ei = r;
                }
                
                l--;
                r++;
            }
            l = i;
            r = i+1;
            while (l>=0 && r<n && s[l]==s[r])
            {
                if (r-l+1>max)
                {
                    max = r-l+1;
                    ei = r;
                }
                l--;
                r++;
            }
        }
        si = ei-max+1;
        
        while (si<=ei)
            res+=s[si++];
        
        return res;
    }
};