class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

      unordered_set<int>st(nums1.begin(),nums1.end());
      vector<int>ans;
      for(auto x : nums2)
      {
        if(st.count(x))
        {
            ans.push_back(x);
            st.erase(x);
        }
      }
      return ans;
        
                          
    }
};