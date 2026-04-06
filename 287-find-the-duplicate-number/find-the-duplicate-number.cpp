class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> frequency;  
        for(int i = 0; i < nums.size(); i++) {
            if(frequency[nums[i]] == 0) {
                frequency[nums[i]] = 1;
            }
            else {
                return nums[i]; 
            }
        }

        return -1;
    }
};