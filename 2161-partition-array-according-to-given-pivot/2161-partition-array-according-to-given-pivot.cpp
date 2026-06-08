class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
          vector<int>left,mid,right;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot){ left.push_back(nums[i]);}
           else if(nums[i]==pivot){ mid.push_back(nums[i]);}
           else{ right.push_back(nums[i]);}

        }
        vector<int>result;
        for(int x: left){ result.push_back(x);}
        for(int x: mid){ result.push_back(x);}
        for(int x: right){ result.push_back(x);}
        return result;
    }
};