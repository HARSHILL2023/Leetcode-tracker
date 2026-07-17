// Last updated: 7/17/2026, 1:58:55 PM
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        unordered_map<int, int> frequency;  
5        for(int i = 0; i < nums.size(); i++) {
6            if(frequency[nums[i]] == 0) {
7                frequency[nums[i]] = 1;
8            }
9            else {
10                return nums[i]; 
11            }
12        }
13
14        return -1;
15    }
16};