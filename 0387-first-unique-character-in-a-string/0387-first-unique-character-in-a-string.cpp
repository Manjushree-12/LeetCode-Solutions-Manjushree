class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>freq(26,0);

        for(char c: s)
        {
            freq[c-'a']++;
        }
        for(int i=0;i<s.length();i++)
        {   char c=s[i];
            if(freq[c-'a']==1){ return i; }
        }
        return -1;
        
    }
};