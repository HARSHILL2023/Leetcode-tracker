// Last updated: 7/20/2026, 10:18:31 AM
1class Solution {
2public:
3    int findKthPositive(vector<int>& arr, int k) {
4
5        vector<int> missing;
6        int mx = *max_element(arr.begin(), arr.end());
7
8        for (int i = 1; i <= mx; i++) {
9            if (find(arr.begin(), arr.end(), i) == arr.end()) {
10                missing.push_back(i);
11            }
12        }
13
14        int num = mx + 1;
15        while (missing.size() < k) {
16            missing.push_back(num);
17            num++;
18        }
19
20        return missing[k - 1];
21    }
22};