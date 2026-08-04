// Last updated: 8/4/2026, 9:08:36 AM
1class Solution {
2public:
3    vector<int> findMissingElements(vector<int>& nums) {
4        int mini = nums[0];
5        int maxi = nums[0];
6
7        for (int x : nums) {
8            mini = min(mini, x);
9            maxi = max(maxi, x);
10        }
11
12        unordered_set<int> s(nums.begin(), nums.end());
13
14        vector<int> ans;
15
16        for (int i = mini; i <= maxi; i++) {
17            if (s.count(i) == 0) {
18                ans.push_back(i);
19            }
20        }
21
22        return ans;
23    }
24};