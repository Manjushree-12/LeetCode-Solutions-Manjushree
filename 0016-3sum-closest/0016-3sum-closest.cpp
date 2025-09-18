class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
 
    
      vector<vector<int>>ans;
      sort(nums.begin(),nums.end());
      long int n = nums.size();
      long int closetsum =nums[0]+nums[1]+nums[2];
      for(int i=0;i<n;i++)
      {
           
            int j = i+1;
            int k = n-1;
            while(j<k)
            {
                int sum = nums[i]+nums[j]+nums[k];
                if(abs(sum - target)< abs(closetsum-target))
                {
                    closetsum = sum;
                }
                else if(sum < target){ j++;}
                else if(sum > target) { k--;}
                else
                {
                    return target;
                }
            }
      }
            return closetsum;
      
        
    }
};