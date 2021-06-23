class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
        
        uint32_t ans = 0;
        
        for (int i= 0 ;i<32 ;i++)
        {
            //get last bit 
            int x = n & 1;
            
            ans = ans | (x<<(31-i)) ;
            //ans<<1;
            n = n>>1;
        }
     
        return ans;
    }
};