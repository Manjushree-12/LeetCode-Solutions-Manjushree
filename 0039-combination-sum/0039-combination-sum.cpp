class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
        vector<vector<int>>ans;
        FindCombination(0,target,ds,ans,candidates);
        return ans;

          
    }
    void FindCombination(int ind,int target,vector<int>&ds,vector<vector<int>>&ans,vector<int>&candidates)
    {
        if(ind==candidates.size())
        {
            if(target==0)
            {
                ans.push_back(ds);
            }
            return;
        }
        if(candidates[ind]<=target)
        {
            ds.push_back(candidates[ind]);
            FindCombination(ind,target-candidates[ind],ds,ans,candidates);
            ds.pop_back();
        }
        FindCombination(ind+1,target,ds,ans,candidates);
    }
};