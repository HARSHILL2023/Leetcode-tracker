// Last updated: 7/30/2026, 10:06:44 AM
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);


        }
        return s;
    }
};