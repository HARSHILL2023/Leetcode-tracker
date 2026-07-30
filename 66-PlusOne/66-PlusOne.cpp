// Last updated: 7/30/2026, 10:07:53 AM
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            digits[i]=0;

        }
        digits.insert(digits.begin(),1);

        return digits;
    }
};