// Last updated: 8/10/2026, 8:27:07 PM
1#include <vector>
2#include <string>
3#include <algorithm>
4
5class Solution {
6public:
7    int maxProduct(std::vector<std::string>& words) {
8        int n = words.size();
9        std::vector<int> masks(n, 0);
10        
11        // Step 1: Precompute bitmask for each word
12        for (int i = 0; i < n; ++i) {
13            for (char c : words[i]) {
14                masks[i] |= (1 << (c - 'a'));
15            }
16        }
17        
18        int max_prod = 0;
19        
20        // Step 2: Compare pairs of bitmasks using bitwise AND
21        for (int i = 0; i < n; ++i) {
22            for (int j = i + 1; j < n; ++j) {
23                // If (masks[i] & masks[j]) == 0, words share no common letters
24                if ((masks[i] & masks[j]) == 0) {
25                    int product = words[i].length() * words[j].length();
26                    max_prod = std::max(max_prod, product);
27                }
28            }
29        }
30        
31        return max_prod;
32    }
33};