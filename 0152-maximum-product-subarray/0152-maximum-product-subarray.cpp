class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int n = nums.size();
        int maxi_p = nums[0];
        int mini_p = nums[0];
        int ans = nums[0];
        for (int i = 1; i < n; i++) {
            int p1 = maxi_p * nums[i];
            int p2 = mini_p * nums[i];
            maxi_p = max(nums[i], max(p1, p2));
            mini_p = min(nums[i], min(p1, p2));
            ans = max(ans, maxi_p);
        }
        return ans;
    }
};