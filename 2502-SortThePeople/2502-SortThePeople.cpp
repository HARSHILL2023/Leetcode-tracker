// Last updated: 7/30/2026, 10:05:41 AM
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    std::vector<std::string> sortPeople(std::vector<std::string>& names, std::vector<int>& heights) {
        int n = names.size();
        std::unordered_map<int, std::string> heightToName;
        
      
        for (int i = 0; i < n; i++) {
            heightToName[heights[i]] = names[i];
        }
        
       
        std::sort(heights.begin(), heights.end(), std::greater<int>());
        
     
        std::vector<std::string> sortedNames(n);
        for (int i = 0; i < n; i++) {
            sortedNames[i] = heightToName[heights[i]];
        }
        
        return sortedNames;
    }
};