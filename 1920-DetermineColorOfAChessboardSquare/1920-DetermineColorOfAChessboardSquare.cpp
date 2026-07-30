// Last updated: 7/30/2026, 10:06:08 AM
class Solution {
public:
    bool squareIsWhite(string coordinates) {
        return ((coordinates[0]-'a'+coordinates[1]+'1')%2!=0);
    }
};