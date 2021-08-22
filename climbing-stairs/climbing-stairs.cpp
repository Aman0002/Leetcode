class Solution {
public:
    int climbStairs(int n) {
        if (n==0 || n==1) return 1;
            
        int *dp = new int [n+1]();
        dp[0] = 0 ;
        dp[1] = 1;
        dp[2] = 2;//11 , 2
        for (int i=3 ; i<=n ;i++)
            dp[i] =  dp[i-1] + dp[i-2];
        
        int ans = dp[n];
        
        delete[] dp;
        return ans;
    }
};