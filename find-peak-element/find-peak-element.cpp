class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if (n==1)
            return 0;
        for (int i=0; i<n ; i++)
            {
              if (i==0)
              {
                        
                if(nums[i]>nums[i+1])
                      return 0;
              }else if (i==n-1)
               {
                        
               if(nums[i]>nums[i-1])
                   return n-1;
                }else
               {
                  if(nums[i]>nums[i+1] && nums[i]>nums[i-1] )
              return i;
              }
            }
        return -1;
    }
};