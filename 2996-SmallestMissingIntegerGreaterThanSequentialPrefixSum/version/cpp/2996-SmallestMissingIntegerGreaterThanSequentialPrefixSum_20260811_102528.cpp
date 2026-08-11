// Last updated: 8/11/2026, 10:25:28 AM
1class Solution {
2public:
3    int missingInteger(vector<int>& nums) {
4        int sum = nums[0];
5        for (size_t i = 1; i < nums.size(); ++i) {
6            if (nums[i] == nums[i - 1] + 1) {
7                sum += nums[i];
8            } else {
9                break;
10            }
11        }
12
13        unordered_set<int> st(nums.begin(), nums.end());
14        while (st.count(sum)) {
15            sum++;
16        }
17
18        return sum;
19    }
20};