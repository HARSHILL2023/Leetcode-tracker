// Last updated: 7/21/2026, 8:56:45 AM
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        for(int i=0;i<nums.size();i++){
5            if(nums[i]==target){
6                return i;
7            }
8            
9        }
10        return -1;
11    }
12};