class Solution {
public:
        void help(vector<int> &nums,int start,vector<int> &bag,vector<vector<int>> &ans)
    {
        //base case
        if(start==nums.size())
        {
            ans.push_back(bag);
            return;
        }
        //rec step
        
        //item include
        bag.push_back(nums[start]);
        help(nums,start+1,bag,ans);
        bag.pop_back();
        //item not include
        int j=start+1;
        while(j<nums.size() && nums[j]==nums[start])j++;
            
        help(nums,j,bag,ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> bag;
        help(nums,0,bag,ans);
        return ans;
    }
};