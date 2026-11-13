class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int max_len=0;
         unordered_set<int>st;
         int j=0;
         for(int i=0;i<s.length();i++)
         {
            while(st.count(s[i]))
            {
                st.erase(s[j]);
                j++;
            }
            
            st.insert(s[i]);
            max_len=max(max_len,i-j+1);
         }
         return max_len;     
    }
};