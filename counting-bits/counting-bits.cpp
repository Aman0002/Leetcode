class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> help(n+1,0);
        
        for (int i=0 ;i<=n ; i++)
            help[i] = __builtin_popcount(i);
        
        return help;
    }
};