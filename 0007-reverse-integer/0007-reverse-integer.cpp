class Solution {
public:
    int reverse(int x) {
        long  num=x;
        long long ans=0;
        while(num!=0) 
        {
            ans+=num%10;
            ans*=10;
            num/=10;
        }
        ans/=10;
        
        if(ans>INT_MAX || ans<INT_MIN){ return 0;}
        return (int)ans;
        
    }
};