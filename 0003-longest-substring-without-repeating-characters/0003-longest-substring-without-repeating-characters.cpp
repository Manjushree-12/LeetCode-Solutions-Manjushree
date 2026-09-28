class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int>st;

        int j=0;
        int max_len=0;
        for(int i=0;i<s.length();i++)
        {
            while(st.count(s[i]))
            { 
               st.erase(s[j]);
               j++;
            }
             max_len=max(max_len,i-j+1);
            st.insert(s[i]);
        
        }
                return max_len;
    }
};