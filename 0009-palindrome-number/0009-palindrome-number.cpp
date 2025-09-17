class Solution {
public:
    bool isPalindrome(int x) {
       int n=reverse(x);
       string s1=to_string(n);
       string s2=to_string(x);
       if(s1==s2) return true;
       return false;
        
    }
    int reverse(int n)
    {
        long long sum=0;
        while(n>0)
        {
            sum +=n%10;
            n=n/10;
            sum=sum*10;
            
        }
        sum= sum/10;
        return sum;
    }
};