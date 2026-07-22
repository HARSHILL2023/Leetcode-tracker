// Last updated: 7/22/2026, 9:01:43 AM
1class Solution {
2public:
3    int mySqrt(int x) {
4        if (x < 2) return x;
5        
6        int left = 1;
7        int right = x;
8        int ans = 0;
9        
10        while (left <= right) {
11            int mid = left + (right - left) / 2;
12            
13            if (mid <= x / mid) {
14                ans = mid;
15                left = mid + 1;
16            } else {
17                right = mid - 1;
18            }
19        }
20        
21        return ans;
22    }
23};