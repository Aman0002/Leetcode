class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int res = 1 ;
        
        sort(nums.begin(),nums.end());
        set<int> temp;
        for (auto x:nums)
        {
            if (x<=0)
                continue;
            
            temp.insert(x);
        }
            
        
        for (auto it = temp.begin(); it!=temp.end() ;it++)
        {
            if (*it==res)
                res++;
            else
                break;
        }
            
        return res;
    }
};