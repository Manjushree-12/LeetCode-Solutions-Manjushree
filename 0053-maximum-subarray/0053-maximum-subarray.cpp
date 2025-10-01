class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int m_sum=nums[0];
        
        for(int i=0;i<nums.size();i++)
        {
            
                sum+=nums[i];
               m_sum=max(m_sum,sum);
               if(sum<0){
                sum=0;
               }
               
           
        }
        return m_sum;

        
    }
};