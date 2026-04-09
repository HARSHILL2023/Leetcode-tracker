class Solution {
public:
    string reverseOnlyLetters(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
           
            if (!ischar(s[left])) {
                left++;
            } 
           
            else if (!ischar(s[right])) {
                right--;
            } 
           
            else {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }

private:
  
    bool ischar(char c) {
        return (c >= 65 && c <= 90) || (c >= 97 && c <= 122);
    }
};
