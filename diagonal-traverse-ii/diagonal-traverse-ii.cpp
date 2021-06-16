class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        
        int n = nums.size();
        
        vector<int> ans;
        map<int,vector<int>> m ;
        
        for (int i = 0 ;i<n ;i++)//rows
        {
            vector<int> temp = nums[i];
            
            for (int j =0 ;j<temp.size(); j++)
            {
                m[i+j].push_back(nums[i][j]);   
            }
            
        }
        for (auto it = m.begin();it!=m.end();it++)
        {
            vector<int> temp = it->second;
            reverse(temp.begin(),temp.end());
            for (auto x:temp)
                ans.push_back(x);
        }
        
        return ans;
        
    }
};