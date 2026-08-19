class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int check = 0;
        string res = "";

        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words[i].size(); j++) {
                check += weights[words[i][j] - 'a'];
            }

            res += 'z' - (check % 26);
            check = 0;
        }

        return res;
    }
};