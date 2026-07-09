class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int max = INT_MAX;
        for (int i = 0; i < strs.size() - 1; i++) {
            int j = 0;
            while (j < strs[i].size() && j < strs[i + 1].size()) {
                if (strs[i][j] != strs[i+1][j]) {
                    break;
                }
                j++;
            }
            if (j < max) {
                max = j;
            }
            
        }
        return strs[0].substr(0, max);
    }
};