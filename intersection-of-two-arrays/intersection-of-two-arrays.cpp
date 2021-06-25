class Solution {
public:
    vector<int> intersection(vector<int>& A, vector<int>& B) {
        
        vector<int> ans;
        unordered_set<int> s;
        int n = A.size() , m = B.size();
        int i = 0 , j = 0;
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        while (i<n && j<m)
        {
        
            if (A[i]<B[j])
                i++;
            else if (A[i]>B[j])
                j++;
            else
            {
                s.insert(A[i]);
                i++;
                j++;
            }
        }
    
        for (auto x:s)
            ans.push_back(x);
        
        return ans;
}
};