class Solution {
public:
    int addDigits(int num) {

        int n=num;
        int sum=0;
        while(true)
        {
            sum+=n%10;
            n=n/10;

            if(n==0 && sum>9)
            {
                n=sum;
                sum=0;
            }
            if(n==0 && sum<=9){ break;}
        }
        return sum;
        
    }
};