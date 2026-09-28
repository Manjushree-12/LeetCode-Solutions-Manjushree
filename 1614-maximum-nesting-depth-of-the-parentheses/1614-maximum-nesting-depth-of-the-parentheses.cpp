class Solution {
public:
    int maxDepth(string s) {

        int count=0;
        int check_count=0;
        int max_count=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                count++;
                
            }
            else if(s[i]==')')
            {
                
                max_count=max(max_count,count);
                count--;
            }
            else
            {
                continue;
            }
        
        }
        return max_count;
        
    }
};