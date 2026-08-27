class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        int n = s.length();
        int count[26] = {0};
        for (char c : s) count[c - 'a']++;

        for (int i = n - 1; i >= 0; i--) {
            int temp[26];
            for (int k = 0; k < 26; k++) temp[k] = count[k];
            
            bool possible = true;
            for (int j = 0; j < i; j++) {
                if (--temp[target[j] - 'a'] < 0) {
                    possible = false;
                    break;
                }
            }
            if (!possible) continue;

            for (int c = target[i] - 'a' + 1; c < 26; c++) {
                if (temp[c] > 0) {
                    string res = target.substr(0, i);
                    res += (char)('a' + c);
                    temp[c]--;
                    for (int k = 0; k < 26; k++) {
                        res.append(temp[k], 'a' + k);
                    }
                    return res;
                }
            }
        }
        return "";
    }
};