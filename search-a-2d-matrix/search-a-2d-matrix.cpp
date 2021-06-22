class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        
        int n = mat.size() , m = mat[0].size();
        
        int up = 0 , down = n-1;
        
        while (up<=down)
        {
            int mid = (down-up)/2 +up;
            
            //if midd is greater
            if (mat[mid][0]>tar)
                down = mid-1 ;
            else
            {
                //Another Binary search 
                int l = 0 , r = m-1;
                while (l<=r)
                {
                    int mid2 = (r-l)/2 + l;
                    if (mat[mid][mid2]==tar) return true;
                    else if (mat[mid][mid2]>tar) r = mid2-1;
                    else l = mid2+1;
                }
                
                up = mid+1;
            }
        }
        return false;
    }
};