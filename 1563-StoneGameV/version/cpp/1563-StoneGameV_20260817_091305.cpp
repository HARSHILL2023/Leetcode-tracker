// Last updated: 8/17/2026, 9:13:05 AM
1#include <vector>
2#include <numeric>
3#include <algorithm>
4
5using namespace std;
6
7class Solution {
8public:
9    int stoneGameV(vector<int>& stoneValue) {
10        int n = stoneValue.size();
11        
12        vector<int> pref(n + 1, 0);
13        for (int i = 0; i < n; ++i) {
14            pref[i + 1] = pref[i] + stoneValue[i];
15        }
16        
17        vector<vector<int>> dp(n, vector<int>(n, 0));
18        
19        for (int len = 2; len <= n; ++len) {
20            for (int i = 0; i <= n - len; ++i) {
21                int j = i + len - 1;
22                
23                for (int k = i; k < j; ++k) {
24                    int leftSum = pref[k + 1] - pref[i];
25                    int rightSum = pref[j + 1] - pref[k + 1];
26                    
27                    if (leftSum < rightSum) {
28                        dp[i][j] = max(dp[i][j], leftSum + dp[i][k]);
29                    } else if (rightSum < leftSum) {
30                        dp[i][j] = max(dp[i][j], rightSum + dp[k + 1][j]);
31                    } else {
32                        dp[i][j] = max(dp[i][j], leftSum + max(dp[i][k], dp[k + 1][j]));
33                    }
34                }
35            }
36        }
37        
38        return dp[0][n - 1];
39    }
40};