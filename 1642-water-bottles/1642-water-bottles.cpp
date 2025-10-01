class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {

        int d=numBottles;
        int ans=0;
        ans=ans+d;
        int b=numExchange;
        while(d>=b)
        {    int n=d/b;
            ans=ans+n;
            d=n+d%b;
        }
        return ans;
        
    }
};