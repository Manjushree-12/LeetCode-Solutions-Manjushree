class Solution {
public:
    int maxProduct(int n) {

        int nn=n;
         int max1=INT_MIN;
         int max2=INT_MIN;
        while(nn!=0)
        {   
            int digit= nn%10;
        if(digit>max1)
        {   max2=max1;
            max1=max(max1,digit);
        }
        else
        {
            max2=max(max2,digit);
        }
        nn/=10;
           
            
        }
        long long int result =1LL*max1*max2;
        
        return result;
        
    }
};