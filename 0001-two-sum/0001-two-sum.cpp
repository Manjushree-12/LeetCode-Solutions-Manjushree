class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            int third=target-nums[i];
            if(mp.find(third)!=mp.end()){ return {mp[third],i};}
            mp[nums[i]]=i;
        }
        
        return {-1,-1};
    }
        
};
