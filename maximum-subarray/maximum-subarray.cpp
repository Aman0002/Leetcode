class Solution {
public:
    int maxSubArray(vector<int>& arr) {
     
        int n = arr.size();
        int ans =INT_MIN,temp=0;
        
        for (int i=0 ;i<n ;i++)
        {
            temp+=arr[i];
            
            if (temp>ans)
            ans = temp;
            
            if (temp<0)
            temp = 0;
            
        }
        
        
        return ans;
    }
};