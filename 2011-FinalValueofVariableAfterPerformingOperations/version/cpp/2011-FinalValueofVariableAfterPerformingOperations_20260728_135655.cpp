// Last updated: 7/28/2026, 1:56:55 PM
1class Solution {
2public:
3    int finalValueAfterOperations(vector<string>& operations) {
4        int ans = 0; 
5        for (auto i : operations) {
6            if (i == "--X" || i == "X--") {
7                --ans; 
8            } else {
9                ++ans; 
10            } 
11        } 
12        return ans; 
13    } 
14};