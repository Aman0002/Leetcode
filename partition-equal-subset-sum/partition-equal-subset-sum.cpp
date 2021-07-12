class Solution {
public:
    bool canPartition(vector<int>& nums) {
        
        int tot = 0 ;
        for (auto x: nums)
            tot+=x;
        
        if  ( tot %2 !=0)
            return false;
        
        
        tot = tot/2 ;
        
        //now we have to check whether we can make subset of sum equals to tot
        vector<vector<bool>> dp(nums.size()+1 , vector<bool>(tot+1 , false) ); 
        
        for (int i = 0 ;i<=nums.size() ; i++)
            dp[i][0]= true;
        
        for (int i=1 ;i<=tot ;i++)
            dp[0][i] = false;
        
        
        for (int i=1 ;i<= nums.size() ; i++)
        {
            for (int j=1 ; j<=tot ;j++)
            {
                if (nums[i-1]<=j)
                    dp[i][j] = dp[i-1][j] || dp[i-1][j-nums[i-1]];
                else 
                    dp[i][j] = dp[i-1][j];
            }
        }
        
        return dp[nums.size()][tot];
        
    }
};