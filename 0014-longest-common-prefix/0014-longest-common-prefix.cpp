class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

       string match=strs[0];
          for(int i=1;i<strs.size();i++)
          {
             string compare=strs[i];
             int len=match.length();
             int j=0;
             string matched="";
             while(j<len && match[j]==compare[j])
             {
                   matched+=match[j];
                   j++;
             }

             match=matched;
          }
          return match;
             
    }
};