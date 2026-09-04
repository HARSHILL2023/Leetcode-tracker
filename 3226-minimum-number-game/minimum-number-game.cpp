class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> ans;

        while (!nums.empty()) {
           
            auto min1 = min_element(nums.begin(), nums.end());
            int val1 = *min1;
            nums.erase(min1);

           auto min2 = min_element(nums.begin(), nums.end());
            int val2 = *min2;
            nums.erase(min2);

          
            ans.push_back(val2);
            ans.push_back(val1);
        }

        return ans; 
    }
};