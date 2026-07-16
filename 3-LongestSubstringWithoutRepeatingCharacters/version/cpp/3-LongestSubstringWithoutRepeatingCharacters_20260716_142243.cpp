// Last updated: 7/16/2026, 2:22:43 PM
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        
5        unordered_map<char, int> mp;
6        int left = 0;
7        int maxLength = 0;
8        
9       
10        for (int right = 0; right < s.size(); right++) {
11            mp[s[right]]++;
12            
13           
14            while (mp[s[right]] > 1) {
15                mp[s[left]]--;
16                left++;
17            }
18            
19           
20            maxLength = max(maxLength, right - left + 1);
21        }
22        
23        return maxLength;
24    }
25};