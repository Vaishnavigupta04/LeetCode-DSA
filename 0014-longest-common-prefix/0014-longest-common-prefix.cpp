class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
            return "";

        int len = strs.size();
        int l = strs[0].size();
        for (int i = 0; i < l; i++) {
            for (string s : strs) {
                if (i >= s.size() || s[i] != strs[0][i])
                    return strs[0].substr(0, i);
            }
        }
        return strs[0];
    }
};