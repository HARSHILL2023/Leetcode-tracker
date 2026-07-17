// Last updated: 7/17/2026, 1:45:38 PM
1class Solution {
2public:
3    int findLHS(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5
6        int r=1;
7        int l=0;
8        int length=0;
9
10        while(r<nums.size()){
11
12            int diff=nums[r]-nums[l];
13
14            if(diff==1){
15              
16                length=max(length,r-l+1);
17                  r++;
18            }
19            else if(diff<1){
20                r++;
21            }
22            else{
23                l++;
24            }
25        }
26        return length;
27    }
28};