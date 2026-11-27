class Solution {

public:
    int divisorsum(vector<int>& nums, int t) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            int val = ceil((float)nums[i] / (float)t);
            sum += val;
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int high = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > high)
                high = nums[i];
        }
        int low = 1;
        int d;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            d = divisorsum(nums, mid);
            if (d <= threshold)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
};