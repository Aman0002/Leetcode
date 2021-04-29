class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        
        int ans= 0;
        sort(costs.begin(),costs.end());
        
        for (int i = 0 ;i <costs.size(); i++)
        {
            coins-=costs[i];
            
            if (coins>=0)
            {
                ans++;
            }else
            {
                break;
            }
        }
        return ans;
        
    }
};