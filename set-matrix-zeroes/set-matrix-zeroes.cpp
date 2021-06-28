class Solution {
public:
    void setZeroes(vector<vector<int>>& A) {
        
        int n = A.size(),m = A[0].size();
    unordered_map<int,int> c,r;
    for (int i=0 ;i<n ;i++)
    {
        for (int j =0 ;j<m ;j++)
        {
            if (A[i][j]==0)
            {
                c[j] = 1;
                r[i] = 1;
            }
        }
    }
    for (int i=0 ;i<n ;i++)
    {
        for (int j=0 ;j<m ;j++)
        {
            if (c[j] || r[i])
            A[i][j] = 0;
        }
    }
    
    
    }
};