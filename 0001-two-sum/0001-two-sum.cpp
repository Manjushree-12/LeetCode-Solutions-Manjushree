class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int,int>mpp;

         for(int i=0;i<nums.size();i++)
         {
            int third=target-nums[i];

            if(mpp.find(third)!=mpp.end())
            {
                return {i,mpp[third]};
            }
            mpp[nums[i]]=i;
         }
         return {-1,-1};
        
    }
        
};
