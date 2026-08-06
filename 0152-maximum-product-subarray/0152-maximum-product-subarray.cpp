class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxprod=nums[0];
        int minprod=nums[0];
        int ans=nums[0];
      for(int i=1;i<nums.size();i++)
      {
            if(nums[i]<0)
            {
                swap(minprod,maxprod);
            }
            minprod=min(nums[i],minprod*nums[i]);
            maxprod=max(nums[i],maxprod*nums[i]);
            ans=max(ans,maxprod);
      }
      return ans;
    }
};