class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int n = nums.size();
        int z = 0;
        int nz = 1;

        while (true)
        {
            while (z < n && nums[z] != 0)
                z++;

            if (z == n)
                break;

            if (nz <= z)
                nz = z + 1;

            while (nz < n && nums[nz] == 0)
                nz++;

            if (nz == n)
                break;

            swap(nums[z], nums[nz]);
        }
    }
};