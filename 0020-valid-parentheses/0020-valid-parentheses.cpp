class Solution {
public:
    bool isValid(string s) {
        stack<char>str;
        for(int i=0;i<s.length();i++)
        {
            char c=s[i];
            if(c=='(' || c=='{' || c=='[') str.push(c);
            else
            {
                if(str.empty()) return false;
                char ch=str.top();
                str.pop();
                if((c==')'&&ch!='(')||(c==']'&&ch!='[')||(c=='}'&&ch!='{')) {return false;}
            }
        }
        if(str.empty()) return true;
        return false;
    }
      
};