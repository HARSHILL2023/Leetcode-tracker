class Solution {
public:
    bool isPalindrome(string s) {
        string res = "";

        for(int i = 0; i < s.size(); i++){
            if((s[i] >= 'a' && s[i] <= 'z') || 
               (s[i] >= 'A' && s[i] <= 'Z') ||
                s[i]>='0' && s[i]<='9')
            {
                res += tolower(s[i]);
            }
        }

        string rev = res;
        reverse(rev.begin(), rev.end());

        return res == rev;
    }
};