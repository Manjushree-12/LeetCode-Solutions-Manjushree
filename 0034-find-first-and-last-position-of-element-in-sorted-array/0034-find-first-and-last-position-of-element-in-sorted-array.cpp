class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
      int n=nums.size();
      int first=firstpos(nums,target,n);
      int last=lastpos(nums,target,n);
      return {first,last};
          
    }

    int firstpos(vector<int>&nums,int target,int n)
    {
        int first=-1;
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=(high+low)/2;
            if(nums[mid]==target){ first=mid; high=mid-1;}
            else if(nums[mid]>target){ high=mid-1;}
            else{ low=mid+1;}
        }
        return first;

    }
    int lastpos(vector<int>&nums,int target,int n)
    {
        int last=-1;
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=(high+low)/2;
            if(nums[mid]==target){ last=mid;low=mid+1;}
            else if(nums[mid]>target){ high=mid-1;}
            else{ low=mid+1;}
        }
        return last;
    }
};