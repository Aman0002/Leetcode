class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        vector<int> ans;
        
        map<int, int> m ;
        
        for (auto x : arr1)
        m[x]++;
        
        for (auto y : arr2)
        {
            //y has to be presented in arr1
            int count = m[y];
            
            while (count--)
                ans.push_back(y);
            
            m[y] = 0 ;
        }
        
        for (auto it = m.begin() ; it != m.end() ; it++)
        {
            while (it->second)
            {
                ans.push_back(it->first);
                it->second -- ;
            }
        }
        
        
        return ans;
    }
};