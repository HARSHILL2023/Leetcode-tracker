// Last updated: 7/30/2026, 10:07:45 AM
class Solution {
public:
    bool search(vector<int>& nums, int target) {
         for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return true;
            }
            
        }
        return false;
    }
    
};