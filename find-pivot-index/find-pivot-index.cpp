class Solution {
public:
    int pivotIndex(vector<int>& nums) {
     
        int t_sum = 0 , l_sum = 0 , r_sum = 0;
        
        for (auto x: nums)
            t_sum+=x;
        
        for (int i =0 ;i <nums.size(); i++)
        {
            r_sum = t_sum - l_sum - nums[i];
            
            if (r_sum == l_sum)
                return i;
            
            l_sum += nums[i];
        }
        
        return -1 ;
        
    }
};