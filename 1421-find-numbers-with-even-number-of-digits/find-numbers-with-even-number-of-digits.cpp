class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;

        for(int i=0;i<nums.size();i++){
            string c=to_string(nums[i]);
            if(c.size()%2==0){
                count++;
                c="";
            }
            c="";
        }

        return count;
    }
};