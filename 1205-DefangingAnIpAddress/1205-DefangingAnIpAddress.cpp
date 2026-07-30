// Last updated: 7/30/2026, 10:06:30 AM
class Solution {
public:
    string defangIPaddr(string address) {
        string ans;

        for(int i=0;i<address.size();i++){

            if(address[i]=='.'){
                ans+="[.]";
            }

            else{
                ans+=address[i];
            }
        }
        return ans;
    }
};