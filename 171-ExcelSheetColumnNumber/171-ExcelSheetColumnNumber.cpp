// Last updated: 7/30/2026, 10:07:34 AM
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        for (char c : columnTitle) {
            int digit = c - 'A' + 1; 
            ans = ans * 26 + digit;
        }
        return ans;
    }
};