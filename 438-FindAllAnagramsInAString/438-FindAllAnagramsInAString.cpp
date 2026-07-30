// Last updated: 7/30/2026, 10:06:53 AM
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int s_len = s.length();
        int p_len = p.length();
        
        if (s_len < p_len) return {};
        
        unordered_map<char, int> p_count;
        unordered_map<char, int> window_count;
        vector<int> res;
        
        for (char c : p) {
            p_count[c]++;
        }
        
        int left = 0;
        for (int right = 0; right < s_len; ++right) {
            window_count[s[right]]++;
            
            if (right - left + 1 == p_len) {
                if (window_count == p_count) {
                    res.push_back(left);
                }
                
                window_count[s[left]]--;
                if (window_count[s[left]] == 0) {
                    window_count.erase(s[left]);
                }
                left++;
            }
        }
        
        return res;
    }
};