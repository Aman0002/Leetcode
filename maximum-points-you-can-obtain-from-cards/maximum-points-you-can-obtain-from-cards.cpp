class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
     
        int ans = 0 , l_sum = 0 , n = cardPoints.size() ;
        
        for (int i =0 ;i<k ;i++)
           l_sum+= cardPoints[i];
        
        ans = l_sum;
        
        for (int i =0 , r_sum =0 ; i<k ;i++)
        {
            r_sum += cardPoints[n-1-i];
            l_sum -= cardPoints[k-1-i];
            ans = max(ans , l_sum+r_sum);
        }
        
        
        return ans;
        
    }
};