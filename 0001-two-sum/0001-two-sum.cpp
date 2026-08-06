class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int>mpp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int third=target-nums[i];
            if(mpp.find(third)!=mpp.end())
            {
                return {mpp[third],i};
            }
            mpp[nums[i]]=i;
        }
        return {-1,-1};
    }
        
};
