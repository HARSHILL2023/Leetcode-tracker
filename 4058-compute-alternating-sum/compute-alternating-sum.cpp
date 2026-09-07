class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int ans=0;
        bool check=true;
        

        for(int i=0;i<nums.size();i++){
            if(check){
                ans+=nums[i];
                check=false;
                continue;
            }
            ans-=nums[i];
            check=true;
        
        }
        return ans;
    }
};