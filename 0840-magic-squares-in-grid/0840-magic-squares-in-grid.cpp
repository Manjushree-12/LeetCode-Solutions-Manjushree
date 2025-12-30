class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        
        int count=0;
        int n=(int)grid.size();
        int m=(int)grid[0].size();
        for(int i=0;i<n-2;i++)
        {  
            for(int j=0;j<m-2;j++)
            {
         if(magicsquare(grid,i,j)==true) {count++;}
        }
        }
        
        return count;

    }
    bool magicsquare(vector<vector<int>>&grid,int r,int c)
    {   vector<bool>seen(10,false);
    for(int i=r;i<r+3;i++)
    {
        for(int j=c;j<c+3;j++)
        {
            int x=grid[i][j];
             if(x<1 || x>9 || seen[x]) {return false;}
            seen[x]=true;
        }
    }
     int d=dialogsum(grid,r,c);
     bool flag=true;
       if(d==0) return false;
        for(int i=r;i<r+3;i++)
        {  
            int a=rowsum(grid,i,c);
            if(a!=d) {return false;}
        }
        for(int i=c;i<c+3;i++)
        {
            int b=colsum(grid,r,i);
          if(b!=d){return false;}   
        }   
            
        
        return flag;
    }

    int rowsum(vector<vector<int>>&grid,int r,int c)
    {int rs=0;
        for(int i=c;i<c+3;i++)
        {
            rs+=grid[r][i];
        }
        return rs;
    }
    int colsum(vector<vector<int>>&grid,int r,int c)
    {
         int cs=0;
        for(int i=r;i<r+3;i++)
        {
            cs+=grid[i][c];
        }
        return cs;
    }
    int dialogsum(vector<vector<int>>&grid,int r,int c)
    {
        
        int d1=0,d2=0;
        for(int i=0;i<3;i++)
        {
            d1+=grid[r+i][c+i];
            d2+=grid[r+i][c+2-i];
        }
        if(d1==d2)
        {
            return d1;
        }
        return 0;
    }
};