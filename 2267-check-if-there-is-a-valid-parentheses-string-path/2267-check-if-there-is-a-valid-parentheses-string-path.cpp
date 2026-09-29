class Solution {
public:
    bool hasValidPath(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<vector<int>>>dp(m,vector<vector<int>>(n,vector<int>(m+n+1,-1)));
        if(grid[0][0]==')'){ return false;}
        return validpath(grid,0,0,0,m,n,dp);
        
    }
    bool validpath(vector<vector<char>>&grid,int count,int i,int j,int m,int n,vector<vector<vector<int>>>&dp)
    {   
        if(i>=m || j>=n){ return false;}
    if(grid[i][j]=='('){ count++;}
        if(grid[i][j]==')'){ count--;}
         if(count<0){ return false;}
        if(i==m-1 && j==n-1)
        {
            if(count==0){ return dp[i][j][count]=true;}
            else{ return dp[i][j][count]=false;}
        }
             if(dp[i][j][count]!=-1)
    {
        return dp[i][j][count];
    }
       

      bool ans= (validpath(grid,count,i+1,j,m,n,dp)||validpath(grid,count,i,j+1,m,n,dp));
       return dp[i][j][count]=ans;

    }
};