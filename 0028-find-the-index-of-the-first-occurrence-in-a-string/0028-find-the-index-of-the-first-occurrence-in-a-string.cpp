class Solution {
public:
    int strStr(string haystack, string needle) {
           int start=0;
           int n=needle.length();
           int m=haystack.length();
           for(int i=0;i<haystack.length();i++)
           {
               int j=i;
               int k=0;
               start=i;
               while(j<m && k<n && haystack[j]==needle[k] )
               {
                   j++;
                   k++;
               }
               j--;
               k--;
               if(j-i+1==n){ return start;}
           }
           return -1;
    }
};