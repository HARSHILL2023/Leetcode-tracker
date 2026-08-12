// Last updated: 8/12/2026, 1:33:30 PM
1class Solution {
2public:
3    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
4        sort(points.begin(),points.end());
5        int ans=0;
6
7        for(int i=1;i<points.size();i++){
8            int diff=points[i][0]-points[i-1][0];
9            ans=max(ans,diff);
10        }
11        return ans;
12    }
13};