class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int candidate = -1 ;
        int count = 0 ;
        
        for (auto x : nums)
        {
            if (count == 0 )//time to change the candidate
            {
                candidate = x;
                count = 1;
            }
            else
                count += x==candidate ? 1 : -1 ;
        }
        
        return candidate;
    }
};