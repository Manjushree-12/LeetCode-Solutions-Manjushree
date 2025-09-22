class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>freq;

        int f=INT_MIN,sum1=0,sum=0;
        for(auto it : nums)
        {
            freq[it]++;
            f=max(f,freq[it]);     
        }    
        
        
       for(auto &it : freq)
       {
        if(f==it.second)
        {
            sum+=it.second;
        }
       }
        
        return sum;
    }
};