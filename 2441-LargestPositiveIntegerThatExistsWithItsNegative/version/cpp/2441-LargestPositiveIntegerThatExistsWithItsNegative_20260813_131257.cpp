// Last updated: 8/13/2026, 1:12:57 PM
1class Solution {
2public:
3    int findMaxK(vector<int>& nums) {
4        int res = -1;
5        sort(nums.begin(),nums.end());
6        int r = nums.size()-1;
7        int l = 0;
8        while(l<r){
9            if(nums[r] + nums[l] == 0){
10                return nums[r];
11            }else if(nums[r]+nums[l]>0){
12                r--;
13            }else{
14                l++;
15            }
16        }
17        return res;
18    }
19};