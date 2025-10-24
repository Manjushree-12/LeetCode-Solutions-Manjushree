class Solution {
public:
    int climbStairs(int n) {
        if(n<=2) return n;

        int current=0,first=1,second=2;
        for(int i=3;i<=n;i++)
        {
            current=first+second;
            first=second;
            second=current;
        }
        return current;

        
    }
};