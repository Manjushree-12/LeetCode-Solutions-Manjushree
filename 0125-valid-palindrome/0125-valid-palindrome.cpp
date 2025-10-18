class Solution {
public:
    bool isPalindrome(string s) {
        string st="";
        for(char ch: s)
        {
            if(isalnum(ch))
            {
                st+=tolower(ch);
            }
        }
       int i=0;
       int j = st.length()-1;
       while(i<j)
       {
        if(st[i++]!=st[j--])
        {
            return false;
        }
        
       }
            return true;
      
    }
};