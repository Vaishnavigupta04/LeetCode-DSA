class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int j = 1;
        int p;
        while (1) {
            p = k * j;
            bool found = false;
            for (int i : nums) {
                if (i == p) {
                    found = true;
                    break;
                }
            }
            if (!found)
                return p;

            j++;
        }
    }
};