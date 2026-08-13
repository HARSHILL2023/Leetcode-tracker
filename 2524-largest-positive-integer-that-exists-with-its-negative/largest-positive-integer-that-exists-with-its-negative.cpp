class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int res = -1;
        sort(nums.begin(),nums.end());
        int r = nums.size()-1;
        int l = 0;
        while(l<r){
            if(nums[r] + nums[l] == 0){
                return nums[r];
            }else if(nums[r]+nums[l]>0){
                r--;
            }else{
                l++;
            }
        }
        return res;
    }
};