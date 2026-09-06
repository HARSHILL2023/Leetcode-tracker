class Solution {
public:
    string reverseWords(string s) {
        int left = 0;

        for (int right = 0; right <= s.size(); right++) {
            
            if (right == s.size() || s[right] == ' ') {
                
              
                int i = left, j = right - 1;
                while (i < j) {
                    char temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                    i++;
                    j--;
                }

                left = right + 1;
            }
        }

        return s;
    }
};