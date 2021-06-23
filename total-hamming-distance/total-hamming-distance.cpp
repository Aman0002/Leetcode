#define  M 1000000007  
class Solution {
public:
    
    int totalHammingDistance(vector<int>& A) {
        
        long long int ans = 0 ;
        int n = A.size();
        
        for (int i = 0 ;i<32 ;i++)
        {
            long long int zeros = 0 ;
            for (int j =0 ;j<n ;j++)
            {
                if ( ( A[j]&(1<<i) ))
                    zeros++;
            }
            
            ans += zeros*(n-zeros);
        }
    
        return ans;
    }
};