// Last updated: 8/3/2026, 9:16:21 AM
1class Solution {
2public:
3    vector<int> decrypt(vector<int>& code, int k) {
4        int n = code.size();
5        vector<int> result(n, 0);
6
7        if (k == 0) {
8            return result;
9        }
10
11       
12        int left = 1, right = k;
13        if (k < 0) {
14            left = n + k;
15            right = n - 1;
16        }
17
18       
19        int windowSum = 0;
20        for (int i = left; i <= right; ++i) {
21            windowSum += code[i];
22        }
23
24        for (int i = 0; i < n; ++i) {
25            result[i] = windowSum;
26           
27            windowSum -= code[left % n];
28            windowSum += code[(right + 1) % n];
29            left++;
30            right++;
31        }
32
33        return result;
34    }
35};