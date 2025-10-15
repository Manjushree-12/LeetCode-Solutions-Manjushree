class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++)
        {
            
                ans.push_back(Rows(i));
            
        }
        return ans;
        
        
    }
    vector<int>Rows(int numRows)
    {
         long long ans=1;
         vector<int>ansrow;
         ansrow.push_back(1);
         for(int i=1;i<numRows;i++)
         {
            ans=ans*(numRows-i);
            ans = ans/i;
             ansrow.push_back(ans);
         }
         return ansrow;
    }
};