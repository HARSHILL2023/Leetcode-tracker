// Last updated: 7/30/2026, 10:06:39 AM
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
       
        vector<int> inc = nums;
        vector<int> dec = nums;

       
        sort(inc.begin(), inc.end());                  
        sort(dec.begin(), dec.end(), greater<int>());   

      
        return (nums == inc) || (nums == dec);
    }
};