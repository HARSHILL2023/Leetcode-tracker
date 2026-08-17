// Last updated: 8/17/2026, 1:21:24 PM
1class Solution {
2public:
3    int minIncrementForUnique(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5int res=0;
6        for(int i=1;i<nums.size();i++){
7            if(nums[i-1]>=nums[i]){
8                res+=nums[i-1]-nums[i]+1;
9                nums[i]=nums[i-1]+1;
10            }
11        }
12        return res;
13    }
14};