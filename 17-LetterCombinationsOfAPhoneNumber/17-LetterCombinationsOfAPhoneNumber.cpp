// Last updated: 7/30/2026, 10:08:24 AM
#include <vector>
#include <string>

using namespace std;

class Solution {
private:
    
    const vector<string> PHONE_MAP = {
        "",     "",     "abc",  "def", 
        "ghi",  "jkl",  "mno",  "pqrs", 
        "tuv",  "wxyz"
    };

    void backtrack(int index, const string& digits, string& current, vector<string>& result) {
      
        if (index == digits.length()) {
            result.push_back(current);
            return;
        }

       
        string letters = PHONE_MAP[digits[index] - '0'];
        for (char letter : letters) {
            current.push_back(letter);           
            backtrack(index + 1, digits, current, result); 
            current.pop_back();               
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if (digits.empty()) {
            return result;
        }

        string current = "";
        backtrack(0, digits, current, result);
        return result;
    }
};