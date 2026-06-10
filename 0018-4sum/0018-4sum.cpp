class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
          int n=nums.size();
          vector<vector<int>>ans;
          sort(nums.begin(),nums.end());
          for(int i=0;i<n;i++)
          {
             if(i>0 && nums[i]==nums[i-1]){continue;}
             for(int j=i+1;j<n;j++)
             {
               if(nums[j]==nums[j-1] && j>i+1){ continue;}
                int k=j+1; int l=n-1;
                while(k<l)
                {  long long val=nums[i];
                val+=nums[j];
                val+=nums[k];
                val+=nums[l];
                    if(val==target){ vector<int>temp={nums[i],nums[j],nums[k],nums[l]}; ans.push_back(temp);
                         k++; l--;
                          while(nums[k]==nums[k-1] && k<l){ k++;}
                while(nums[l]==nums[l+1] && k<l){l--;}}
                    else if(val<target){ k++;}
                    else{  l--;}
                }
               
             }
          }      
          return ans;
    }
};