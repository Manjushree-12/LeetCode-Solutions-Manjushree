class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
      
      for(int i=0;i<board.size();i++)
      {
        for(int j=0;j<board[0].size();j++)
        {
            if(board[i][j]!='.')
            {
                if(!isValid(i,j,board[i][j],board))
                {
                    return false;
                }
            }
        }
      }
      return true;
        
        
    }
    bool isValid(int row,int col,char c,vector<vector<char>>&board)
    {
        for(int i=0;i<9;i++)
        {
            if(board[i][col]==c && i!=row) return false;
            if(board[row][i]==c && i!=col) return false;
            int subrow=3*(row/3)+i/3;
            int subcol=3*(col/3)+i%3;
            if(board[subrow][subcol]==c && subrow!=row && subcol!=col)        {return false;}
        }
        return true;
    }
};