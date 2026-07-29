// Last updated: 7/29/2026, 1:56:10 PM
1#include <vector>
2#include <algorithm>
3#include <cmath>
4#include <climits>
5
6class Solution {
7public:
8    int threeSumClosest(std::vector<int>& nums, int target) {
9      
10        sort(nums.begin(), nums.end());
11        
12        int closestSum = nums[0] + nums[1] + nums[2];
13        int n = nums.size();
14
15       
16        for (int i = 0; i < n - 2; ++i) {
17            int left = i + 1;
18            int right = n - 1;
19
20            while (left < right) {
21                int currentSum = nums[i] + nums[left] + nums[right];
22
23               
24                if (currentSum == target) {
25                    return currentSum;
26                }
27
28              
29                if (std::abs(currentSum - target) < std::abs(closestSum - target)) {
30                    closestSum = currentSum;
31                }
32
33              
34                if (currentSum < target) {
35                    left++;
36                } else {
37                    right--;
38                }
39            }
40        }
41
42        return closestSum;
43    }
44};