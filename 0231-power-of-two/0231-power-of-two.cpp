class Solution {
public:
    bool isPowerOfTwo(int n) {

        long long ans=1L;
        if(n==1) return true;
        while(ans<=n)
        {
            ans=2*ans;
            if(ans==n){ return true;}
        }
        return false;
        
    }
};