class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        
        int n = nums.size();
        int cnt_subsets = (1<<n);
        sort(nums.begin(),nums.end());
        set<vector<int>> s;
        
        for (int i =0 ;i<cnt_subsets ; i++)
        {
            vector<int> subset;
          for (int j = 0 ;j<n ;j++)
          {
              if ( (i & (1<<j) )!=0)
              {
                  subset.push_back(nums[j]);
              }
          }
            s.insert(subset);
        }
        
        vector<vector<int>> ans(s.begin(), s.end());
        
        return ans;
    }
};