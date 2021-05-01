class Solution {
public:
    string replaceDigits(string s) {
        
        int n = s.size();
        string ans ="";
        for (int i =0 ; i < n ;i++)
        {
            if (i%2==0)
                ans+=s[i];
            else
            {
                char x = s[i-1] + s[i]-'0';
                
                ans += x;
            }
            
            
        }
        
        return ans;
    }
};