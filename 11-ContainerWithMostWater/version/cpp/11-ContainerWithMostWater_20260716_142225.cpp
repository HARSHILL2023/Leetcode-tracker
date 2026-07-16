// Last updated: 7/16/2026, 2:22:25 PM
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int max_water = 0;
5        int left = 0;
6        int right = height.size() - 1;
7        
8        while (left < right) {
9            
10            int width = right - left;
11            
12           
13            int current_water = min(height[left], height[right]) * width;
14            
15           
16            max_water = max(max_water, current_water);
17            
18           
19            if (height[left] < height[right]) {
20                left++;
21            } else {
22                right--;
23            }
24        }
25        
26        return max_water;
27    }
28};