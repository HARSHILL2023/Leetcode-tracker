// Last updated: 7/30/2026, 10:05:44 AM
class Solution {
public:
    char repeatedCharacter(string s) {
       unordered_set<char> st;

        for(int i=0;i<s.size();i++){
        
            if(st.count(s[i])){
                return s[i];
            }
            st.insert(s[i]);
        }

        return ' ';

    }
};