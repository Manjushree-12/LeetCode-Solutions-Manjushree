class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
      
      int ans=-1;
      int n=nums.size();
       int max_count=INT_MIN;
      
      for(int i=0;i<n;i++)
      {  int cnt=0;
         if(nums[i]%2==0)
         {
           for(int j=0;j<n;j++)
           {
            if(i==j || (nums[j]%2)!=0){ continue;}
            if(nums[i]==nums[j]){ cnt++;}
           }
           if(cnt>max_count){ max_count=cnt; ans=nums[i];}
         if(cnt==max_count){ ans=min(ans,nums[i]);}      
         }
         

      }
      return ans;
        
    }
};