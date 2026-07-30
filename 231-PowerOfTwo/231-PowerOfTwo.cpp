// Last updated: 7/30/2026, 10:07:21 AM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1) return true;

        if(n<=0 || n%2!=0) return false;

        return isPowerOfTwo(n/2);
    }
};