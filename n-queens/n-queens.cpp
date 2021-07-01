class Solution {
public:
    vector<vector<string>> res;
    bool possible (int n , vector<vector<int>> &board , int row , int col)
    {
        
        //Check for its straight upper rows  
        for (int i = row-1 ;i>=0 ;i--)
        {
            if (board[i][col]==1)
                return false;
        }
        
        //Checking for left upper diagonal
        for (int i= row-1 , j = col-1 ; i>=0 && j>=0 ;i--,j--)
        {
            if (board[i][j]==1)
                return false;
        }
        
        //checking for right upper diagonal
        for (int i = row-1 , j = col +1 ; i>=0 && j <n ; i-- , j++)
        {
            if (board[i][j]==1)
                return false;
        }
        
        return true;
        
    }
    
    void Place_Queens(int n , vector<vector<int>> &temp ,int row)
    {
        if (row == n)
        {
            vector<string> currRes;
            for (int i=0 ;i<n ;i++)
            {
                string s = "";
                for (int j=0 ;j<n ; j++)
                {
                    if (temp[i][j]==1)
                        s+= 'Q';
                    else
                        s+= '.';
                }
                currRes.push_back(s);
            }
            res.push_back(currRes);
            return ;
        }
        
        //Placing at each possible position in row
        for (int j = 0; j<n ;j++)
        {
            if (possible(n , temp , row ,j))
            {
                temp[row][j] = 1;
                Place_Queens(n , temp , row+1);
                temp[row][j] = 0;
            }
        }
        return ;
        
    }
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<int>> board(n,vector<int>(n,0));
        
        Place_Queens(n , board , 0);
        
        return res;
    }
};