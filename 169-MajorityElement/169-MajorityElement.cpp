// Last updated: 7/30/2026, 10:07:35 AM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> frequency;

        for (int i = 0; i < nums.size(); i++) {
            frequency[nums[i]]++;  

        }
        int size=nums.size()/2;
           for(auto it :frequency){
            if(it.second> size){
                return it.first;
            }
           }
        

        return -1;
    }
};