class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int low=0;
       int m=matrix.size();
       int n=matrix[0].size();
       int high=m*n-1;

       while(low<=high)
       {
        int mid=low+(high-low)/2;

        if(matrix[mid/n][mid%n]==target)
        {
            return true;
        }
        else if(target>matrix[mid/n][mid%n])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
       }
       return false;
        
    }
};