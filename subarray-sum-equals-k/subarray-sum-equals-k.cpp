class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        
        int n = arr.size();
        unordered_map<int,int> m;
        int sum = 0 , ans = 0;
        for (int i =0 ;i < n ;i++)
        {
            sum+=arr[i];
            if (sum==k)
            ans++;
            
            if (m.count(sum-k)==0)
            {
                m[sum]++;
            }else
            {
                ans+=m[sum-k];
                m[sum]++;
            }
            
        }
        
        
        return ans;
    }
};