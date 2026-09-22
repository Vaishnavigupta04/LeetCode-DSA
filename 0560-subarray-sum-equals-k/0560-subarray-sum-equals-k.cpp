class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int n = nums.size();
        map<int, int> freq;
        freq[0] = 1;
        int preSum = 0, count = 0;
        for (int i = 0; i < n; i++) {
            preSum += nums[i];
            int remove = preSum - k;
            count += freq[remove];
            freq[preSum] += 1;
        }
        return count;
    }
};