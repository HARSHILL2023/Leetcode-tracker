// Last updated: 7/20/2026, 9:16:20 AM
1class Solution {
2public:
3    int arrangeCoins(int n) {
4        int count=0;
5        for(int i=1;i<=n;i++){
6            if(n>=i){
7                n=n-i;
8                count++;
9            }
10            else{
11                return count;
12            }
13
14        }
15        return count;
16    }
17};