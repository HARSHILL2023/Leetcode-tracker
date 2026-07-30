// Last updated: 7/30/2026, 9:00:07 AM
1class Solution {
2public:
3    uint32_t reverseBits(uint32_t n) {
4        uint32_t result = 0;
5        
6        for (int i = 0; i < 32; i++) {
7           
8            result = (result << 1) | (n & 1);
9            
10           
11            n >>= 1;
12        }
13        
14        return result;
15    }
16};