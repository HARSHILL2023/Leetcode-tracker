// Last updated: 7/30/2026, 10:08:04 AM
#include <string>

using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        if (n <= 0) return "";
        string result = "1";
        
        for (int i = 1; i < n; ++i) {
            string current = "";
            int len = result.length();
            
            for (int j = 0; j < len; ++j) {
                int count = 1;
                while (j + 1 < len && result[j] == result[j + 1]) {
                    count++;
                    j++;
                }
                current += to_string(count) + result[j];
            }
            result = current;
        }
        
        return result;
    }
};