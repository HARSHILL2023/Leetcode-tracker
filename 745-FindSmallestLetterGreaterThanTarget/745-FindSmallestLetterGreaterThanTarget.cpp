// Last updated: 7/30/2026, 10:06:43 AM
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left = 0;
        int right = letters.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (letters[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        // If no greater letter is found, return the first letter
        if (left == letters.size()) {
            return letters[0];
        }

        return letters[left];
    }
};