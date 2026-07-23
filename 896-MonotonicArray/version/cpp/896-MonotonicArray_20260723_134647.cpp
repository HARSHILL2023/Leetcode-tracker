// Last updated: 7/23/2026, 1:46:47 PM
1class Solution {
2public:
3    bool isMonotonic(vector<int>& nums) {
4        bool isIncreasing = true;
5        bool isDecreasing = true;
6
7        for (int i = 1; i < nums.size(); i++) {
8          
9            if (nums[i] < nums[i - 1]) {
10                isIncreasing = false;
11            }
12            if(nums[i]>nums[i-1]){
13                isDecreasing=false;
14            }
15           
16        }
17
18      
19        return isIncreasing || isDecreasing;
20    }
21};