// Last updated: 7/30/2026, 10:06:11 AM
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_altitude = 0;
        int current_altitude = 0;
        
        for (int g : gain) {
            current_altitude += g;
            max_altitude = max(max_altitude, current_altitude);
        }
        
        return max_altitude;
    }
};