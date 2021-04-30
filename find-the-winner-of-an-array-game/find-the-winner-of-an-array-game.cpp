class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        
        int n = arr.size();
       
        
        int cnt = 0;
        int si = 0 ;
        
        while (si<n-1)
        {
            int j = si+1;
            while (arr[si]>arr[j]&&j<n)
            {
                cnt++;
                j+=1;
                if (cnt==k||cnt==n)
                {
                    return arr[si];
                }
            }
            si = j;
            cnt = 1;
            if (cnt==k||cnt==n)
                return arr[si];
        }
        
        int max = arr[0];
        
        for (auto i : arr)
        {
            if (i>max)
                max = i;
        }
        
        return max;
        
    }
};