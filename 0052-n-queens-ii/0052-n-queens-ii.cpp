class Solution {
public:
    int totalNQueens(int n) {
        vector<string>board(n);
        int count=0;
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        Solve(0,board,n,count);
        return count;
        
    }
    void Solve(int col,vector<string>&board,int n,int &count)
    {
               if(col==n)
               {
                count++;
                return;
               }
               for(int row=0;row<n;row++)
               {
                  if(isSafe(row,col,board,n))
                  {
                    board[row][col]='Q';
                    Solve(col+1,board,n,count);
                    board[row][col]='.';
                  }
               }
    }
    bool isSafe(int row,int col,vector<string>&board,int n)
    {
        int dumcol=col;
        int dumrow = row;

        while(col>=0 && row>=0)
        {
            if(board[row][col]=='Q') return false;
            row--;
            col--;
        }
        col=dumcol;
        row=dumrow;
        while(col>=0)
        {
            if(board[row][col]=='Q') return false;
             col--;
        }
        col = dumcol;
        row =dumrow;
        while(row<n && col>=0)
        {
            if(board[row][col]=='Q') return false;
            row++;
            col--;
        }
        return true;
    

              
                    
    }
};