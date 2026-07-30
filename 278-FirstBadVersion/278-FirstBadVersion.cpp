// Last updated: 7/30/2026, 10:07:13 AM
class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1, right = n;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            if (isBadVersion(mid)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        } // The while loop ends here
        
        return left; // Move this line out here
    }
};