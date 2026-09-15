class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans(n);
        int k = 0;
        int i = 0;
        int j = 1;
        while (k < n) {
            if (nums[k] > 0) {
                ans[i] = nums[k];
                i += 2;
            }
            else {
                ans[j] = nums[k];
                j += 2;
            }
            k++;
        }
        return ans;
    }
};