class Solution {
public:
    string longestPalindrome(string s) {
       int start=0;
       int max_len=0;
       int n=s.length();

       for(int i=0;i<n;i++)
       {
        int left=i,right=i;

        while(left>=0 && right<n && s[left]==s[right] )
        {   int len=right-left+1;
            if(max_len<len)
            {
                start=left;
                max_len=len;
            }
            left--;
            right++;
        }
        left=i; right=i+1;
        while(left>=0 && right<n && s[left]==s[right] )
        {   int len=right-left+1;
            if(max_len<len)
            {
                start=left;
                max_len=len;
            }
            left--;
            right++;
        }
        
       }
       return s.substr(start,max_len);


    }
};