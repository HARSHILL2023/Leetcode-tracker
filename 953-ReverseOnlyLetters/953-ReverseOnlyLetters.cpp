// Last updated: 7/30/2026, 10:06:37 AM
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int left =0;
        int right=s.size()-1;

        while(left<right){

            if(!isalpha(s[left])){
                left++;
            }
            
            else if(!isalpha(s[right])){
                right--;
            }
            else {
                swap(s[left],s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};