// Last updated: 7/21/2026, 8:58:09 AM
1class Solution {
2public:
3    bool search(vector<int>& nums, int target) {
4         for(int i=0;i<nums.size();i++){
5            if(nums[i]==target){
6                return true;
7            }
8            
9        }
10        return false;
11    }
12    
13};