class Solution {
public:
    int numDecodings(string s) {
        
        if (s[0]=='0')
            return 0;
        
        int n = s.size();
        int *dp = new int[n+1];
        
        dp[0]=1;
        dp[1]=1;
        
        for (int i=2 ; i<=n ;i++)
        {
            if (s[i-1]!='0')
             dp[i] = dp[i-1];
            else
                dp[i] = 0;
            
            int b = (s[i-2]-'0')*10 + s[i-1]-'0' ; 
            
            if (b==0)
                return 0;
            
            if (b>=10 && b<=26)
                dp[i] += dp[i-2];
        }
        
        int ans = dp[n];
        delete[] dp;
        return ans;
    }
};