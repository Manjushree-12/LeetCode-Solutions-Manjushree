class Solution {
public:
    bool isPowerOfFour(int n) {
        long long ans=1L;
        if(n==1) {return true;}
        while(ans<=n)
        {
            ans=4*ans;
            if(ans==n){return true;}
        }
        return false;
        
    }
};