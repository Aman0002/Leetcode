class Solution {
public:
    void subsets_rec (vector<vector<int>> & ans , vector<int> & nums , int si , vector<int> temp)
    {
        if (si >= nums.size())
        {
            ans.push_back(temp);
            return ;
        }
        
        //Not taking first index
        subsets_rec (ans , nums , si+1 , temp);
        
        //Taking first index
        temp.push_back(nums[si]);
        
        subsets_rec (ans , nums , si+1 , temp);
        
            
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ans;
        
        vector<int> temp;
        subsets_rec (ans , nums , 0 , temp);
        return ans;
    }
};