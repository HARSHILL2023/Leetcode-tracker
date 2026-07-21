// Last updated: 7/21/2026, 1:38:08 PM
1class Solution {
2public:
3    int maxVowels(string s, int k) {
4
5        int count = 0;
6        int ans = 0;
7
8        int l = 0;
9        int r = 0;
10
11        while (r < s.size()) {
12
13           
14            if (s[r] == 'a' || s[r] == 'e' || s[r] == 'i' || s[r] == 'o' || s[r] == 'u')
15                count++;
16
17            if (r - l + 1 == k) {
18
19                ans = max(ans, count);
20
21                if (s[l] == 'a' || s[l] == 'e' || s[l] == 'i' || s[l] == 'o' || s[l] == 'u')
22                    count--;
23
24                l++;  
25            }
26
27            r++;
28        }
29
30        return ans;
31    }
32};