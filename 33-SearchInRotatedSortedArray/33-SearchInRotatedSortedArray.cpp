// Last updated: 7/30/2026, 10:08:10 AM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
            
        }
        return -1;
    }
};