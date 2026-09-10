class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n])
                j++;
            if (j>1)
                return false;
        }
        return true;
    }
};