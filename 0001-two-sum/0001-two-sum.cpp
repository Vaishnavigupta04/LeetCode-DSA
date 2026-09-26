class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;

        for (int i = 0; i < nums.size(); i++) {
            int sum = nums[i];
            int c = target - sum;
            if (mpp.find(c) != mpp.end())
                return {i, mpp[c]};
            mpp[nums[i]] = i;
        }

        return {-1, -1};
    }
};