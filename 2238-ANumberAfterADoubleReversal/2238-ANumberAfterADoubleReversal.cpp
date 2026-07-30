// Last updated: 7/30/2026, 10:05:53 AM
class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num==0){
            return true;
        }
        return num%10!=0;
    }
};