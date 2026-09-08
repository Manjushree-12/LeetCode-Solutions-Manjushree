class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

       string match=strs[0];
       string ans;

       for(int i=1;i<strs.size();i++)
     {     string str;
     
              
            for(int j=0;j<strs[i].length()&&j<match.length();j++)
            {
                
                if(strs[i][j]==match[j])
                {
                    str+=match[j];
                }
                else
                {
                    break;
                }
            }
            match=str;
            ans=str;
       }
       return match;
             
    }
};