class Solution {
public:
    typedef tuple <int , int , int > tu;
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        
        if (nums1.size()==0 || nums2.size()==0)
            return {};
        
        int n = nums1.size() , m = nums2.size(); 
        
        vector< vector<int> > ans;
        
        priority_queue<tu , vector<tu> , greater<tu>> pq;//Min heap
        
        for (int i=0 ; i<n ; i++)
            pq.push({ nums1[i] + nums2[0], i , 0});
        
        while (pq.size()>0 && k--)
        {
            auto [sum , i , j] = pq.top();
            pq.pop();
            
            ans.push_back({nums1[i],nums2[j]});
            
            if (j+1 <nums2.size())
                pq.push( { nums1[i] + nums2[j+1] , i , j+1 } );
        }
        
        return ans;
    }
};