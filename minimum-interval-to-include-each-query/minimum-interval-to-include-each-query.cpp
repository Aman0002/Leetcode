class Solution {
public:
    vector<int> minInterval(vector<vector<int>>& intervals, vector<int>& Q) {
        
        
        sort (intervals.begin(),intervals.end());
        vector<int> queries = Q;
        sort (queries.begin(),queries.end());
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        unordered_map<int,int> m;
        
        int i = 0 , n = intervals.size();
        for (auto x: queries)
        {
            while (i<n && intervals[i][0]<=x)
            {
                int l = intervals[i][0] , r = intervals[i++][1];
                pq.push({r-l+1,r});
            }
            
            while (pq.size() && pq.top().second<x)
            {
                pq.pop();
            }
            
            m[x] = pq.size() ? pq.top().first:-1;
        }
        
        vector<int> ans;
        
        for (auto x : Q)
        {
            ans.push_back(m[x]);
        }
        
        return ans;
        
    }
};