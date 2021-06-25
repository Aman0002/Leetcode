class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        
        vector<vector<int>> ans;
    
        if (nums.size()<3)
            return ans;
        
        //We will sort the vector
        sort(nums.begin(),nums.end());
        
        for (int i=0 ;i<nums.size();i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;
            
            int l = i+1 , r = nums.size()-1;
            vector<int> temp;
            while (l<r)
            {
                
                int sum = nums[i] + nums[l] + nums[r];
                if (sum==0)
                {
                    ans.push_back({nums[i],nums[l],nums[r]});
                    while(l+1<nums.size() && nums[l]==nums[l+1])
                    l++;
                    
                    l++;
                    while(r-1>=0 && nums[r]==nums[r-1])
                    r--;
                    r--;
                }else if (sum>0)
                {
                    while(r-1>=0 && nums[r]==nums[r-1])
                    r--;
                    r--;
                }
                else
                {
                    while(l+1<nums.size() && nums[l]==nums[l+1])
                    l++;
                    l++;
                }
            }
        }
        
        
        
        return ans;
    }
};