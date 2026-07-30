// Last updated: 7/30/2026, 10:07:20 AM
class Solution {
public:
    int addDigits(int num) {

        while(num >= 10) {

            int sum = 0;

            while(num > 0) {

                int rem = num % 10;

                sum += rem;

                num = num / 10;
            }

            num = sum;
        }

        return num;
    }
};