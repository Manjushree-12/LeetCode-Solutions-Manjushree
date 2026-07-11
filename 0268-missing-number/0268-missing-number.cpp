class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n1=nums.size();
        int sum1=n1*(n1+1)/2;
        int sum2=0;
        for(int i=0;i<n1;i++)
        {
           sum2+=nums[i];
        }
        return sum1-sum2;

        
    }
};