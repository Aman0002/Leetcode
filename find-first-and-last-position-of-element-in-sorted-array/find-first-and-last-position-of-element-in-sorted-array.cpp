class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int tar) {
        
       if (binary_search(nums.begin(),nums.end(),tar))
       {
           int low = lower_bound(nums.begin(),nums.end(),tar) - nums.begin();
           int high = upper_bound(nums.begin(),nums.end(),tar) - nums.begin() - 1;
           return {low,high};
       }
        
        return {-1 , -1};
        
    }
};