class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        if(s.empty()){ return 0;}
        int len=0;
        int max_len=INT_MIN;
        int i=0;
        for(int j=0;j<s.length();j++)
        {

            while(st.count(s[j]))
            {
                st.erase(s[i]);
                i++;
            }
            st.insert(s[j]);
            max_len=max(max_len,j-i+1);
        }
        return max_len;
    }
};