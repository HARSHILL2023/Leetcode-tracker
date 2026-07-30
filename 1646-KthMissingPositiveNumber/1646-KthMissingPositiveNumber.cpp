// Last updated: 7/30/2026, 10:06:14 AM
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        vector<int> missing;
        int mx = *max_element(arr.begin(), arr.end());

        for (int i = 1; i <= mx; i++) {
            if (find(arr.begin(), arr.end(), i) == arr.end()) {
                missing.push_back(i);
            }
        }

        int num = mx + 1;
        while (missing.size() < k) {
            missing.push_back(num);
            num++;
        }

        return missing[k - 1];
    }
};