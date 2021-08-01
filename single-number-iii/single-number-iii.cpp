class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        vector<int> res;
        
        int t_xor = 0 ;
        
        for (auto x: nums)
            t_xor = t_xor^x;
        
        int pos = -1 ;
        for (int i= 0 ; i<=31 ; i++)
        {
            if ( t_xor & (1<<i) )
            {
                pos = i;
                break;
            }
        }
        int zero = 0 , one = 0 ;
        
        for (int i=0 ;i<nums.size() ; i++)
        {
            if ( nums[i] & (1<<pos) )
                one = one ^ nums[i];
            else
                zero ^= nums[i];
        }
        
        return {one,zero};
    }
};