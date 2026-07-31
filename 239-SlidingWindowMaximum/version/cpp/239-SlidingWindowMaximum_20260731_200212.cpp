// Last updated: 7/31/2026, 8:02:12 PM
1class Solution {
2public:
3    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
4        int n = nums.size();
5        if (n == 0 || k == 0) return {};
6        if (k == 1) return nums;
7
8        vector<int> left(n);
9        vector<int> right(n);
10
11        left[0] = nums[0];
12        right[n - 1] = nums[n - 1];
13
14        for (int i = 1; i < n; i++) {
15            if (i % k == 0) left[i] = nums[i];
16            else left[i] = max(left[i - 1], nums[i]);
17
18            int j = n - 1 - i;
19            if ((j + 1) % k == 0) right[j] = nums[j];
20            else right[j] = max(right[j + 1], nums[j]);
21        }
22
23        vector<int> ans(n - k + 1);
24        for (int i = 0; i <= n - k; i++) {
25            ans[i] = max(right[i], left[i + k - 1]);
26        }
27
28        return ans;
29    }
30};