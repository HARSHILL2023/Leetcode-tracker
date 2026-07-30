// Last updated: 7/30/2026, 10:07:36 AM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int value : nums){
            ans = ans ^ value;
        }
        return ans;
    }
};