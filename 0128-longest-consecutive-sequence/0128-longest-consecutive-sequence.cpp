class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        if(!nums.size()){ return 0;}
        for(int x: nums)
        {
            st.insert(x);
        }
        int count=0;
        int max_count=INT_MIN;

        for(int it:st)
        {
            if(st.find(it-1)==st.end())
            {  count=1;
                int x=it;
                while(st.find(x+1)!=st.end())
                {
                    count++;
                    x++;
                }   
                max_count=max(count,max_count);
            }
        }
        return max_count;

        
    }
};