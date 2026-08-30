class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minimum = INT_MAX;
        int maximum = INT_MIN;
        int max_index, min_index;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (maximum < nums[i]) {
                maximum = nums[i];
                max_index = i;
            }
            if (minimum > nums[i]) {
                minimum = nums[i];
                min_index = i;
            }
        }
        int d1 = max(max_index, min_index) + 1;
        int d2 = n - min(max_index, min_index);

        int d3 = min(max_index, min_index) + 1 + n - max(max_index, min_index);

        return min({d1, d2, d3});
    }
};