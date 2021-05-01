class Solution {
public:
    bool canArrange(vector<int>& a, int k) {
     
       map<int,int> arr;
        
       for (auto x: a)
       {
           arr[(x%k+k)%k]++;
       }
        
        if (arr[0]%2!=0)
            return false;
        
        for (int i =1 ;i < k ;i++)
        {
            if (arr[i]!=arr[k-i])
                return false;
        }
        
        
        return true;
           
    }
};