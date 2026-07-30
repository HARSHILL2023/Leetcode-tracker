// Last updated: 7/30/2026, 10:05:45 AM
class Solution {
public:
    int countAsterisks(string s) {
        int check=0;
        int count=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='|'){
                check++;
            }
            if(s[i]=='*' && check%2==0){
                count++;
            }
        }
        return count;
    }
};