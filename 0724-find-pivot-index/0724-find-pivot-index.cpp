class Solution {
public:
    int pivotIndex(vector<int>& nums) {

       int lsum=0;
       int total=0;
       int n=nums.size();
       for(int i=0;i<n;i++){ total+=nums[i];}
       for(int i=0;i<n;i++)
       {
          long long rsum=total-lsum-nums[i];
          if(rsum==lsum){ return i;}
          lsum+=nums[i];
       }
       return -1;
    }
};