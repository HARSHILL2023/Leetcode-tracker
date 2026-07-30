// Last updated: 7/30/2026, 1:49:59 PM
1class Solution {
2public:
3    int compress(vector<char>& chars) {
4        vector<char> res;
5        int n = chars.size();
6        int i = 0;
7
8        while (i < n) {
9            char currentChar = chars[i];
10            int count = 0;
11
12        
13            while (i < n && chars[i] == currentChar) {
14                count++;
15                i++;
16            }
17
18
19            res.push_back(currentChar);
20
21            
22            if (count > 1) {
23                string countStr = to_string(count);
24                for (char c : countStr) {
25                    res.push_back(c);
26                }
27            }
28        }
29
30        chars = res;
31
32        return chars.size();
33    }
34};