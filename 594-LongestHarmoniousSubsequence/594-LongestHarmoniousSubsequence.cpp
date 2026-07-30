// Last updated: 7/30/2026, 10:06:47 AM
class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int r=1;
        int l=0;
        int length=0;

        while(r<nums.size()){

            int diff=nums[r]-nums[l];

            if(diff==1){
              
                length=max(length,r-l+1);
                  r++;
            }
            else if(diff<1){
                r++;
            }
            else{
                l++;
            }
        }
        return length;
    }
};