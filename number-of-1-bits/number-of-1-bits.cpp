class Solution {
public:
    int hammingWeight(uint32_t n) {
       
        int cnt = 0;
        for (int i=0 ;i<32 ;i++)
        {
            int temp = 1<<i;
            if ((n&temp) != 0)
                cnt++;
        }
        return cnt;
    }
};