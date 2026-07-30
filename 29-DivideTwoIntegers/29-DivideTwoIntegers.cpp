// Last updated: 7/30/2026, 10:08:11 AM
class Solution {
public:
    int divide(int dividend, int divisor) {
        // Corner case: overflow when dividing INT_MIN by -1
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX; 
        }
        
        // Determine the sign of the result
        // True if signs are different, meaning the quotient is negative
        bool isNegative = (dividend < 0) ^ (divisor < 0);
        
        // Convert to absolute values using long long to handle INT_MIN comfortably
        long long absDividend = abs((long long)dividend);
        long long absDivisor = abs((long long)divisor);
        
        long long quotient = 0;
        
        // Exponential search / Bit manipulation approach
        while (absDividend >= absDivisor) {
            long long tempDivisor = absDivisor;
            long long multiple = 1;
            
            // Double the divisor dynamically while it fits in the remaining dividend
            while (absDividend >= (tempDivisor << 1)) {
                tempDivisor <<= 1;
                multiple <<= 1;
            }
            
            // Subtract the largest shifted divisor found from dividend
            absDividend -= tempDivisor;
            // Add the respective multiple to the quotient
            quotient += multiple;
        }
        
        // Apply the correct sign
        return isNegative ? -quotient : quotient;
    }
};