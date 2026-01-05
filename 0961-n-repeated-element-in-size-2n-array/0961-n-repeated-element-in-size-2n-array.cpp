class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=((int)nums.size())/2;
    
        for(int i=0;i<(int)nums.size();i++)
        {  int count=0;
           for(int j=0;j<(int)nums.size();j++)
           {
        

               if(nums[i]==nums[j])
               {
                   count++;
               }
           }        
           if(count==n)
           {
             return nums[i];
           }
        }
        return -1;
    }
};