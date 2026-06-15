class Solution {
public:
    string truncateSentence(string s, int k) {
        int spacecount=0;

        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                spacecount++;
            }
            if(spacecount==k){
                return s.substr(0,i);
            }
        }
        return s;
    }
};