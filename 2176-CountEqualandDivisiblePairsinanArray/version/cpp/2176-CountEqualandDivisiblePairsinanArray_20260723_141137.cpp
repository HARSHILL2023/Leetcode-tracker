// Last updated: 7/23/2026, 2:11:37 PM
1class Solution {
2public:
3    int countPairs(vector<int>& nums, int k) {
4        int count = 0, n = nums.size();
5        for (int i = 0; i < n; i++) {
6            for (int j = i + 1; j < n; j++) {
7                if (nums[i] == nums[j] && (i * j) % k == 0) {
8                    count++;
9                }
10            }
11        }
12        return count;
13    }
14};