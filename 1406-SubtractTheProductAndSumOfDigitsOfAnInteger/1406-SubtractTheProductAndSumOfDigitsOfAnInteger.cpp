// Last updated: 7/30/2026, 10:06:26 AM
class Solution {
public:
    int subtractProductAndSum(int n) {

        int sum = 0;
        int product = 1;

        while(n > 0) {

            int digit = n % 10;

            sum += digit;

            product *= digit;

            n = n / 10;
        }

        return product - sum;
    }
};