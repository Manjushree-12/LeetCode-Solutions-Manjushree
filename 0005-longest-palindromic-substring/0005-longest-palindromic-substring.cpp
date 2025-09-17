class Solution {
public:
    string longestPalindrome(string s) {
     int len=s.length();
     int maxlen=1;
     int start=0;
     for(int i=0;i<len;i++)
     {
        int l=i,r=i;
        while(l>=0 && r<len && s[l]==s[r])
        {
            if(maxlen<r-l+1)
            {maxlen= r-l+1;
                start=l;
            }
            l--;
            r++;
        }
        l=i;r=i+1;
        while(l>=0 && r<len && s[l]==s[r])
        {
            if(maxlen<r-l+1)
            {maxlen= r-l+1;
                start=l;
            }
            l--;
            r++;
        }
     }
     return s.substr(start,maxlen);


    }
};