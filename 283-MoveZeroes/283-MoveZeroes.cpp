// Last updated: 7/30/2026, 10:07:12 AM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[index] = nums[i];
                index++;
            }
        }

        for (int i = index; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};