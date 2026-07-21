// Last updated: 7/21/2026, 2:28:43 PM
1class Solution {
2public:
3    vector<int> findAnagrams(string s, string p) {
4        int s_len = s.length();
5        int p_len = p.length();
6        
7        if (s_len < p_len) return {};
8        
9        unordered_map<char, int> p_count;
10        unordered_map<char, int> window_count;
11        vector<int> res;
12        
13        for (char c : p) {
14            p_count[c]++;
15        }
16        
17        int left = 0;
18        for (int right = 0; right < s_len; ++right) {
19            window_count[s[right]]++;
20            
21            if (right - left + 1 == p_len) {
22                if (window_count == p_count) {
23                    res.push_back(left);
24                }
25                
26                window_count[s[left]]--;
27                if (window_count[s[left]] == 0) {
28                    window_count.erase(s[left]);
29                }
30                left++;
31            }
32        }
33        
34        return res;
35    }
36};