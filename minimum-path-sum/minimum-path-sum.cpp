class Solution {
public:
    int help(vector<vector<int>>& grid,int i , int j ,int m ,int n ,int **a)
    {
        if (i>=m||j>=n)
            return INT_MAX;
        if (a[i][j]!=-1)
            return a[i][j];
        
        if (i==m-1&&j==n-1)
        {
            
            a[i][j]=grid[i][j];
            return a[i][j];
        }
        int  x = help(grid,i+1,j,m,n,a);
        int y = help(grid,i,j+1,m,n,a);
        
        a[i][j] =grid[i][j]+min(x,y);
        return a[i][j];
    }
    int minPathSum(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        int **a = new int*[m];
        for (int i =0 ;i < m; i++)
        {
             a[i]= new int[n];
            for (int j =0 ; j< n ;j ++)
                a[i][j]=-1;
        }   
        
        return help(grid,0,0,m,n,a);
    }
};