// Last updated: 7/17/2026, 9:23:54 AM
1class Solution {
2public:
3    char nextGreatestLetter(vector<char>& letters, char target) {
4        int left = 0;
5        int right = letters.size() - 1;
6
7        while (left <= right) {
8            int mid = left + (right - left) / 2;
9
10            if (letters[mid] > target) {
11                right = mid - 1;
12            } else {
13                left = mid + 1;
14            }
15        }
16
17        // If no greater letter is found, return the first letter
18        if (left == letters.size()) {
19            return letters[0];
20        }
21
22        return letters[left];
23    }
24};