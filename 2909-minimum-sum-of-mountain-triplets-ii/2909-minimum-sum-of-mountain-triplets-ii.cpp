class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();

        vector<int> leftMin(n), rightMin(n);

        leftMin[0] = nums[0];
        for (int i = 1; i < n; i++) {
            leftMin[i] = min(leftMin[i - 1], nums[i]);
        }

        rightMin[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            rightMin[i] = min(rightMin[i + 1], nums[i]);
        }

        int ans = INT_MAX;

        for (int j = 1; j < n - 1; j++) {
            if (leftMin[j - 1] < nums[j] &&
                rightMin[j + 1] < nums[j]) {

                ans = min(ans,
                          leftMin[j - 1] +
                          nums[j] +
                          rightMin[j + 1]);
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};