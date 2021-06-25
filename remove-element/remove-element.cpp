class Solution {
public:
    int removeElement(vector<int>& A, int B) {
        
        int len = 0 , l =0;
    
    for (int i=0 ;i<A.size();i++)
    {
        if (A[i]!=B)
            swap(A[i],A[l++]);
        else
            len++;
    }
    
    return A.size()- len;
    }
};