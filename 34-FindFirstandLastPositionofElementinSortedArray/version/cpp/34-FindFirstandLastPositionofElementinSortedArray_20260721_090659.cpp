// Last updated: 7/21/2026, 9:06:59 AM
1class Solution {
2public:
3    vector<int> searchRange(vector<int>& nums, int target) {
4        int first = -1, last = -1;
5        
6        for (int i = 0; i < nums.size(); i++) {
7            if (nums[i] == target) {
8                if (first == -1) first = i; 
9                last = i;                 
10            }
11        }
12        
13        return {first, last};
14    }
15};