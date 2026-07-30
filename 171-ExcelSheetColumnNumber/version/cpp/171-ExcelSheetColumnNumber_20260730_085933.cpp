// Last updated: 7/30/2026, 8:59:33 AM
1class Solution {
2public:
3    int titleToNumber(string columnTitle) {
4        int ans = 0;
5        for (char c : columnTitle) {
6            int digit = c - 'A' + 1; 
7            ans = ans * 26 + digit;
8        }
9        return ans;
10    }
11};