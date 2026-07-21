class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int s=-1,e=-1;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target && s==-1)
            { s=i;}
            if(nums[i]==target && s!=-1)
            {
                e=i;
            }
        }
        return {s,e};
        
        
    }
};