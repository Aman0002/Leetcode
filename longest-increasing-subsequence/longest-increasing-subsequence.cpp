class Solution {
public:
    int lengthOfLIS(vector<int>& a) {
        
        int n = a.size();
        int *dp = new int[n];
       
       dp[0] = 1;
       
       for (int i =1 ;i < n ;i++)
       {
           int x = a[i];
           dp[i]  = 1;
           for (int j = i-1 ; j>= 0 ;j--)
           {
               if (a[j]<a[i])
               {
                   int possans = 1+ dp[j];
                   if (possans>dp[i])
                   dp[i] = possans;
               }
           }
          
           
       }
       
       int ans = 1;
       for (int i =0 ;i <n ;i++)
       {
           ans = max(ans,dp[i]);
       }
       
       return ans;
    }
};