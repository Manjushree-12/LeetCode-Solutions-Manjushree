class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
          vector<int>ans;
          for(int i=0;i<(int)nums.size();i++)
          {
            for(int j=i+1;j<(int)nums.size();j++)
            {
                if(i==j) continue;
                if(nums[i]+nums[j]==target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    
                }
            }
          }
          return ans;
    }
};
