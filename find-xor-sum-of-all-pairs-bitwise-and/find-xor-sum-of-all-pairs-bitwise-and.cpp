class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        
        
        int first =arr1[0];
    
        for (int i = 1 ;i <arr1.size();i++)
        {
            first = first^arr1[i];
        }
        
        int ans = first & arr2[0];
        
        for (int j = 1 ; j< arr2.size(); j++)
        {
            int x = first & arr2[j];
            ans = ans ^ x;
        }
        
        return ans;
        
    }
};