// Last updated: 7/17/2026, 8:48:46 AM
1class Solution {
2public:
3    int firstBadVersion(int n) {
4        int left = 1, right = n;
5        
6        while (left < right) {
7            int mid = left + (right - left) / 2;
8            
9            if (isBadVersion(mid)) {
10                right = mid;
11            } else {
12                left = mid + 1;
13            }
14        } // The while loop ends here
15        
16        return left; // Move this line out here
17    }
18};