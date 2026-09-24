class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        int i = 0;

        while (i < n) {
            int d =nums[i];
            int sum = 0;
            while (d > 0) {
                int digit = d % 10;
                sum += digit;
                d = d / 10;
            }
            if (sum == i) {
                return i;
            }
            i++;
        }
        return -1;
    }
};