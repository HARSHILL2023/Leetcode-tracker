// Last updated: 7/30/2026, 10:07:28 AM
class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while (n > 0) {
            n &= (n - 1);
            count++;
        }
        return count;
    }
};