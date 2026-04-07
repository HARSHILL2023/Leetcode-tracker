class Solution {
public:
    int reverse(int x) {
        int rem=0, rev=0;
        while (x!=0) {
            rem=x%10;
            x/=10;
            if (rev>INT_MAX/10 or rev<INT_MIN/10) return 0;
            rev=rev*10+rem;
        }
        return rev;
    }
};