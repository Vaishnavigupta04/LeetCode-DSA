class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int max_idx=0, min_idx=0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[max_idx] < nums[i]) {
                max_idx = i;
            }
            if (nums[min_idx] > nums[i]) {
                min_idx = i;
            }
        }
        int d1 = max(max_idx, min_idx) + 1;
        int d2 = n - min(max_idx, min_idx);

        int d3 = min(max_idx, min_idx) + 1 + n - max(max_idx, min_idx);

        return min({d1, d2, d3});
    }
};