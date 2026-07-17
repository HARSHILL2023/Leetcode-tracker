// Last updated: 7/17/2026, 9:05:58 AM
1class Solution {
2public:
3    bool isPerfectSquare(int num) {
4        int left = 1;
5        int right = num;
6
7        while (left <= right) {
8            long long mid = left + (right - left) / 2;
9            long long square = mid * mid;
10
11            if (square == num) {
12                return true;
13            }
14            else if (square > num) {
15                right = mid - 1;
16            }
17            else {
18                left = mid + 1;
19            }
20        }
21
22        return false;
23    }
24};