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