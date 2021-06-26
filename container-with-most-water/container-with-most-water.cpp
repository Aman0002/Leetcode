class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n = height.size();
        int i = 0 , j = n-1;
        int ans = 0;
        while (i<j)
        {
            if (height[i]<height[j])
            {
                ans = max(ans,height[i]*(j-i));
                
                i++;
            }else
            {
                ans = max(ans,height[j]*(j-i));
                j--;
            }
        }
        
        return ans;
    }
};