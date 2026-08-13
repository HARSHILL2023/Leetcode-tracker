// Last updated: 8/13/2026, 1:42:56 PM
1#include <vector>
2#include <algorithm>
3
4class Solution {
5public:
6    double minPrice(std::vector<int>& prices, std::vector<int>& discounts) {
7        // Sort both arrays in descending order to apply maximum discounts to maximum prices
8        std::sort(prices.rbegin(), prices.rend());
9        std::sort(discounts.rbegin(), discounts.rend());
10        
11        double total = 0.0;
12        int n = prices.size();
13        int m = discounts.size();
14        
15        for (int i = 0; i < n; ++i) {
16            if (i < m) {
17                // Apply discount[i] to prices[i]
18                total += prices[i] * (100.0 - discounts[i]) / 100.0;
19            } else {
20                // No discount left for prices[i]
21                total += prices[i];
22            }
23        }
24        
25        return total;
26    }
27};