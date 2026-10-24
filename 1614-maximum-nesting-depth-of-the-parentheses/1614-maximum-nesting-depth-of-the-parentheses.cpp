class Solution {
public:
    int maxDepth(string s) {
        
        int maxi = 0;
        int ans = 0, ans1 = 0;
        int val = 0;
        for (char c : s) {
            if (c == '(')
                ans++;
            else if (c == ')')
                ans1++;
            val = ans - ans1;
            maxi = max(maxi, val);
        }
        return maxi;
    }
};