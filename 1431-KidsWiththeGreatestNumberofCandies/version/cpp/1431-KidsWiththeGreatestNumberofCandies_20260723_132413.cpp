// Last updated: 7/23/2026, 1:24:13 PM
1class Solution {
2public:
3    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
4      
5        int count = *max_element(candies.begin(), candies.end()); 
6        vector<bool> ans;
7        
8        for (int i = 0; i < candies.size(); i++) {
9          
10            if (candies[i] + extraCandies >= count) {
11                ans.push_back(true);
12            } else {
13                ans.push_back(false);
14            }
15        }
16        
17        return ans;
18    }
19};