class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int freq[101] = {};
        int maxi = 0, ans = 0;
        for (int x : nums) {
            freq[x]++;
        }
        for (int x : freq) {
            if (x > maxi) {
                maxi = x;
                ans = x;
            } else if (x == maxi && x > 0)
                ans += x;
        }
        return ans;
    }
};