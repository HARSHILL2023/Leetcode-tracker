// Last updated: 7/30/2026, 10:06:13 AM
class Solution {
public:
    string interpret(string command) {
        
        string ans="";

        for(int i=0;i<command.size();i++){

            if(command[i]=='G'){
                ans+='G';
            }

            else if(command[i]=='(' && command[i+1]==')'){
                ans+="o";
                i++;
            }

            else{
                ans+="al";
                i+=3;
            }
        }
        return ans;
    }
};