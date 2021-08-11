class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        
       unordered_map <string , multiset <string>> adj;
        
        for (auto x : tickets)
            adj[x[0]].insert(x[1]);
        
        vector<string> ans;
        stack <string> st;
        st.push("JFK");
        
        while (st.size())
        {
            string src = st.top();
            //st.pop();
            //string newer = adj[curr];
            
            if (adj[src].size()==0)//dead end we can go anywhere
            {
                ans.push_back (src);
                st.pop();
            }else
            {
                auto dst = adj[src].begin();
                st.push (*dst);
                adj[src].erase (dst);
            }
        }
        
        reverse (ans.begin(),ans.end());
        
        return ans;
        
        
    }
};