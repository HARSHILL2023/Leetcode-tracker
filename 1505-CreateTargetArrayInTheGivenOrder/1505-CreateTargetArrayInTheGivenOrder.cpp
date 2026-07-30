// Last updated: 7/30/2026, 10:06:22 AM
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target;
        
        for (int i = 0; i < nums.size(); i++) {
           
            target.insert(target.begin() + index[i], nums[i]);
        }
        
        return target;
    }
};