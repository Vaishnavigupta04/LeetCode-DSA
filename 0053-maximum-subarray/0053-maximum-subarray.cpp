class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int msum = nums[0];
        int sum = nums[0];
        for (int j = 1; j < n; j++) {
            sum += nums[j];
            if (sum < nums[j])
                sum = nums[j];
            msum = max(msum, sum);
        }

        return msum;
    }
};
