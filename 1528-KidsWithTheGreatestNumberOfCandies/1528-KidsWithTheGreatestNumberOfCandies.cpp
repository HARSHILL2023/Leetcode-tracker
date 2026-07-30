// Last updated: 7/30/2026, 10:06:21 AM
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
      
        int count = *max_element(candies.begin(), candies.end()); 
        vector<bool> ans;
        
        for (int i = 0; i < candies.size(); i++) {
          
            if (candies[i] + extraCandies >= count) {
                ans.push_back(true);
            } else {
                ans.push_back(false);
            }
        }
        
        return ans;
    }
};