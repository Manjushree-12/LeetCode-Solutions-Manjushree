class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        for(int i=1;i<strs.size();i++)
        {
            int j=0;
            string str1="";
            while(j<strs[i].size() && j<ans.length())
            {   char c=strs[i][j];
                if(ans[j]!=c){break;}
                else
                {
                    str1+=c;
                }
                j++;
            }
            ans=str1;


        }
        return ans;
        
    }
};