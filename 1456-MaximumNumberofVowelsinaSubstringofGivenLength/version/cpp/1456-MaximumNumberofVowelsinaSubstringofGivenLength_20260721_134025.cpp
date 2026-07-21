// Last updated: 7/21/2026, 1:40:25 PM
1class Solution {
2public:
3    int maxVowels(string s, int k) {
4
5        int left = 0;
6        int right = 0;
7
8        int count = 0;   
9        int ans = 0;     
10
11        while (right < s.size()) {
12
13            
14            if (s[right] == 'a' || s[right] == 'e' ||
15                s[right] == 'i' || s[right] == 'o' ||
16                s[right] == 'u') {
17                count++;
18            }
19
20            
21            if (right - left + 1 == k) {
22
23                
24                ans = max(ans, count);
25
26                
27                if (s[left] == 'a' || s[left] == 'e' ||
28                    s[left] == 'i' || s[left] == 'o' ||
29                    s[left] == 'u') {
30                    count--;
31                }
32
33               
34                left++;
35            }
36
37            
38            right++;
39        }
40
41        return ans;
42    }
43};