// Last updated: 7/30/2026, 10:08:18 AM
#include <vector>
#include <string>

class Solution {
public:
    void backtrack(int openCount, int closeCount, int n, std::string current, std::vector<std::string>& result) {
        if (current.length() == 2 * n) {
            result.push_back(current);
            return;
        }

        if (openCount < n) {
            backtrack(openCount + 1, closeCount, n, current + "(", result);
        }

        if (closeCount < openCount) {
            backtrack(openCount, closeCount + 1, n, current + ")", result);
        }
    }

    std::vector<std::string> generateParenthesis(int n) {
        std::vector<std::string> result;
        backtrack(0, 0, n, "", result);
        return result;
    }
};