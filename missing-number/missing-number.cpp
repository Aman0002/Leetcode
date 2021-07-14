class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int mul = (n * (n+1) ) / 2;
        
        int tot = 0;
        for (auto x : nums)
            tot += x;
        
        return mul - tot;
    }
};