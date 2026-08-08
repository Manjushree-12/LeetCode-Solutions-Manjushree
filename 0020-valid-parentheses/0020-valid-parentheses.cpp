class Solution {
public:
    bool isValid(string s) {
        stack<char>st;

        for(int i=0;i<s.length();i++)
        {   char c=s[i];
            if(c=='('||c=='['||c=='{')
            {
                st.push(c);
            }
            else
            {
                if(st.empty() && (c==']' || c=='}' || c==')'))
                {
                    return false;
                }
                if((c==']' && st.top()!='[') ||(c=='}' && st.top()!='{') ||(c==')' && st.top()!='('))
                {
                    return false;
                }
                else
                {
                    st.pop();
                }
            }
        }
        if(st.empty()){ return true;}
        return false;
    }
      
};