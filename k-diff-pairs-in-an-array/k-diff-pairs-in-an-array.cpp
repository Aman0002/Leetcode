class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
     
        int ans = 0;
        unordered_map<int,int> m;
        //unordered_set<pair<int,int>> s;
        for (auto x :nums)
            m[x]++;
        
        for (auto y :m)
        {
            int frst = y.first;
            int sec = y.first + k;
            if (frst == sec && k==0 && m[frst]>1)
                ans++;

            if (k!=0 && m.count(y.first+k)>0)
                ans++;
        }
        
        return ans ;
    }
};