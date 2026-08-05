// Last updated: 8/5/2026, 10:24:13 AM
1class Solution {
2public:
3    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
4        vector<vector<int>> adj(n);
5        for (const auto& inv : invocations) {
6            adj[inv[0]].push_back(inv[1]);
7        }
8
9        vector<bool> isSuspicious(n, false);
10        queue<int> q;
11        
12        q.push(k);
13        isSuspicious[k] = true;
14
15        while (!q.empty()) {
16            int u = q.front();
17            q.pop();
18
19            for (int v : adj[u]) {
20                if (!isSuspicious[v]) {
21                    isSuspicious[v] = true;
22                    q.push(v);
23                }
24            }
25        }
26
27        bool canRemove = true;
28        for (const auto& inv : invocations) {
29            int u = inv[0];
30            int v = inv[1];
31            if (!isSuspicious[u] && isSuspicious[v]) {
32                canRemove = false;
33                break;
34            }
35        }
36
37        vector<int> result;
38        for (int i = 0; i < n; ++i) {
39            if (!canRemove || !isSuspicious[i]) {
40                result.push_back(i);
41            }
42        }
43
44        return result;
45    }
46};