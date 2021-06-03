class Solution {
public:
    int maximalSquare(vector<vector<char>>& arr) {
        
        int n = arr.size();
        int m = arr[0].size();
        int **dp = new int*[n];
    
    for (int i=0 ;i<n ;i++)
        dp[i] = new int[m];
    
    int ans = 0;
    //filling first row
    for (int i=0 ;i<m ;i++)
        {
            dp[0][i] = arr[0][i]-'0' ? 1 : 0;
            ans = max(ans,dp[0][i]);
        }
    //filling first column
    for (int i=0 ;i<n ;i++)
        {
            dp[i][0] = arr[i][0]-'0' ? 1 : 0;
            ans = max(ans,dp[i][0]);
        }
    
    for (int i=1 ; i<n ;i++)
    {
        for (int j=1 ;j<m ;j++)
        {
            if (arr[i][j]-'0'==0)
                {
                    dp[i][j] = 0;
                    continue;
                }
            
            dp[i][j] = 1 + min(min(dp[i-1][j-1],dp[i-1][j]),dp[i][j-1]);
            
            ans = max(ans,dp[i][j]);
        }
    }
    return ans*ans;
    }
};