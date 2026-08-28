class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        vector<int> count(n, 0);
        int i = 0;
        int j = 0;
        while (i < n) {
            if (nums[i] != 0) {
                count[j]++;
            } else
                j++;
            i++;
        }
        int ans = count[0];
        for (int i = 0; i < count.size(); i++) {
            if (ans < count[i])
                ans = count[i];
        }
        return ans;
    }
};