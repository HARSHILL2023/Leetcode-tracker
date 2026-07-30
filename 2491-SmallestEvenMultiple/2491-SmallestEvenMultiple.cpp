// Last updated: 7/30/2026, 10:05:42 AM
class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%2==0){
            return n;
        }

        return n*2;
    }
};