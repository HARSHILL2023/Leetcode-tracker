// Last updated: 7/17/2026, 9:15:13 AM
1/** 
2 * Forward declaration of guess API.
3 * @param  num   your guess
4 * @return 	     -1 if num is higher than the picked number
5 *			      1 if num is lower than the picked number
6 *               otherwise return 0
7 * int guess(int num);
8 */
9
10class Solution {
11public:
12    int guessNumber(int n) {
13        long long left=0;
14        long long right=n;
15
16        while(left<=right){
17            long long mid=left+(right-left)/2;
18            int result = guess(mid);
19
20            if(result==0){
21                return mid;
22            }
23            else if(result==-1){
24                right=mid-1;
25            }
26            else{
27                left=mid+1;
28            }
29        }
30        return -1;
31    }
32};