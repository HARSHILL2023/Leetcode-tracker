// Last updated: 7/30/2026, 10:06:01 AM
class Solution {
public:
    int getLucky(string s, int k) {
        string numStr = "";
        for (char c : s) {
            numStr += to_string(c - 'a' + 1);
        }
        
        int currentSum = 0;
        for (char c : numStr) {
            currentSum += c - '0';
        }
        k--; 
        
        while (k > 0 && currentSum >= 10) {
            int nextSum = 0;
            while (currentSum > 0) {
                nextSum += currentSum % 10;
                currentSum /= 10;
            }
            currentSum = nextSum;
            k--;
        }
        
        return currentSum;
    }
};