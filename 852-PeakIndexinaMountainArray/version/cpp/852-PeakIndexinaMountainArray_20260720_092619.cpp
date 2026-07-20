// Last updated: 7/20/2026, 9:26:19 AM
1class Solution {
2public:
3    int peakIndexInMountainArray(vector<int>& arr) {
4        int max=INT_MIN;
5        int index=0;
6
7        for(int i=0;i<arr.size();i++){
8            if(arr[i]>max){
9                max=arr[i];
10                index=i;
11            }
12        }
13        return index;
14    }
15};