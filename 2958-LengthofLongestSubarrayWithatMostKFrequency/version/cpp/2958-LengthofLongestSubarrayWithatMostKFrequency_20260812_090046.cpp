// Last updated: 8/12/2026, 9:00:46 AM
1class Solution {
2public:
3    int maxSubarrayLength(vector<int>& nums, int k) {
4        unordered_map<int, int> count;
5        int left = 0, maxLen = 0;
6
7        for (int right = 0; right < nums.size(); ++right) {
8            count[nums[right]]++;
9
10            while (count[nums[right]] > k) {
11                count[nums[left]]--;
12                left++;
13            }
14
15            maxLen = max(maxLen, right - left + 1);
16        }
17
18        return maxLen;
19    }
20};