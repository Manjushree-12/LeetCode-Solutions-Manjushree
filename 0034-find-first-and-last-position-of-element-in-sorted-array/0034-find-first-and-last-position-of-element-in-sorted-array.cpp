class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int s=first(nums,target);
        int e=last(nums,target);
        return {s,e};
        
        
    }

    int first(vector<int>&nums,int &target)
    {
        
        int low=0; int n=nums.size();
        int high=n-1;
        int first=-1;
        while(low<=high)
        {
            int mid= low+(high-low)/2;

            if(nums[mid]==target )
            {
                first=mid;
                high=mid-1;
            }
            
            else if(nums[mid]<target){ low=mid+1;}
            else { high=mid-1;}
        }
        return first;
    }
     int last(vector<int>&nums , int &target)
    {
        
        int low=0; int n=nums.size();
        int high=n-1;
        int last=-1;
        while(low<=high)
        {
            int mid= low+(high-low)/2;

            if(nums[mid]==target )
            {
                last=mid;
                low=mid+1;
            }
            
            else if(nums[mid]<target){ low=mid+1;}
            else { high=mid-1;}
        }
        return last;
    }
};