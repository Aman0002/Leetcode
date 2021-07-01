class Solution {
public:
    bool check (vector<vector<char>> &board ,char num , int row , int col)
    {
        //check num in same row
        for (int i =0 ;i <9 ;i++)
        {
            if (board[row][i] == num)
            return false;
        }
        
        //Check num in same col
        for (int i = 0 ; i<9 ;i++)
        {
            if (board[i][col]==num)
                return false;
        }
        
        //check in 3x3 grid
        int rowfactor = row - (row%3);
        int colfactor = col - (col%3);
        for (int i =0 ;i<3 ;i++)
        {
            for (int j =0 ;j<3 ; j++)
            {
                if (board[i+rowfactor][j+colfactor]==num)
                    return false;
            }
        }
        return true;
    }
    bool get_emptylocation(vector<vector<char>> &board , int &row , int &col)
    {
        for (int i=0 ;i<9 ;i++)
        {
            for (int j =0 ;j<9 ;j++)
            {
                if (board[i][j]=='.')
                {
                    row = i ; 
                    col = j;
                    return true;
                }
            }
        }
        
        return false;
    }
    bool solve (vector<vector<char>> &board)
    {
        
        int row , col ;
        //Find the empty positions
        if (!get_emptylocation(board , row , col))
            return true;
        
        for (int i =1 ;i<=9 ;i++)
        {
            if ( check (board , i+'0' , row , col))
            {
                board[row][col] = i + '0';
                
                if (solve (board))
                    return true;
                
                board[row][col] = '.';
            }
        }
        
        return false; 
    }
    void solveSudoku(vector<vector<char>>& board) {
        
        solve(board);
    }
};