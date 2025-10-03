class Solution {
public:
    int lengthOfLastWord(string s) {
        int j=s.length()-1;
        int count=0;
       while(j>=0 && s[j]==' ')
       {
        j--;
       }
       while(j>=0 && s[j]!=' ')
       {
         count++;
         j--;
       }
        return count;
    }
};