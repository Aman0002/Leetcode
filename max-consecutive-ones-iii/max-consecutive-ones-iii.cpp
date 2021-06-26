class Solution {
public:
    int longestOnes(vector<int>& A, int B) {
        
        int n = A.size();
    
    int count = 0 , ans = 0;
    int j =0;
    for (int i=0 ;i<n ;i++)
    {
        if (A[i]==0)
         count++;
         
        if (count>B)
        {
            while (count>B)
            {
                if (A[j]==0)
                {
                    count--;
                }
                j++;
            }
        }
        
        ans = max(ans,i-j+1);
    }
    
    return ans;
    }
};