class Solution {
public:
    bool rotateString(string s, string goal) {
        int len = s.length();
        int len2 = goal.length();

        if (len != len2) return false;

        for (int i = 0; i < len; i++) {
            if (s == goal)  return true;
            s.push_back(s[0]);
            s.erase(0, 1);
        }
        return false;
    }
};