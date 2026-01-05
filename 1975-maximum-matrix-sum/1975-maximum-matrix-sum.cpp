class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum=0;
      int m=(int)matrix.size();
      int n=(int)matrix[0].size();
      int min_val=INT_MAX;
      int count=0;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
               if(matrix[i][j]<0){count++;}
               min_val=min(min_val,abs(matrix[i][j]));
               sum+=abs(matrix[i][j]);
            }
        }
        if(count%2==0){ 

            return sum;
        }
        sum-=2*min_val;
        return sum;
        
    }
};