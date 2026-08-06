class Solution {
public:
    int majorityElement(vector<int>& nums) {
           int count=0;
           int ele=0;
           int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(count==0)
            {
                ele=nums[i];
                count++;
            }
            else if(i>0 && ele==nums[i])
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return ele;
     
      }
};