// Last updated: 7/30/2026, 10:06:32 AM
class Solution {
public:
    string removeDuplicates(string s) {
        string res="";

        for(char ch:s){
            if(!res.empty()&&res.back()==ch){
                res.pop_back();
            }
            else{
                res.push_back(ch);
            }
        }
        return res;
    }
};