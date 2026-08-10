class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string s1=strs[0];
       

        for(int i=1;i<strs.size();i++)
        {
            int n=s1.length();
            string s2=strs[i];
             string result="";
            for(int j=0;j<n;j++)
            {
                if(s2[j]==s1[j]){ result+=s2[j];}
                else
                {
                    break;
                }
            }
            s1=result;
            
        }
        return s1;
             
    }
};