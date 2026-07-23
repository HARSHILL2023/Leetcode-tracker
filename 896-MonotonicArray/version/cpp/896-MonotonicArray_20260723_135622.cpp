// Last updated: 7/23/2026, 1:56:22 PM
1class Solution {
2public:
3    bool isMonotonic(vector<int>& nums) {
4       
5        vector<int> inc = nums;
6        vector<int> dec = nums;
7
8       
9        sort(inc.begin(), inc.end());                  
10        sort(dec.begin(), dec.end(), greater<int>());   
11
12      
13        return (nums == inc) || (nums == dec);
14    }
15};