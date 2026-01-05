class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {

        
        
        long long int anss=0;
        int n=(int)nums.size();
        for(int i=0;i<n;i++)
        {
            int ele=nums[i];
            int j=2;
            int div=2;
         long long   int ans=0;
            while(j<=ele/2)
            {
                if(ele%j==0)
                {
                    ans+=j;
                    div++;
                }
                j++;
                if(div>4)
            {
                break;
            }
            
            }
            if(div==4)
            {
                anss+=ans+1+ele;
            }
            
            
        }
      return anss;      
    }
};