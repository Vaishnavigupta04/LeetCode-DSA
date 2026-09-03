class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mn = nums1[0];
        for (int x : nums1) {
            if (x < mn)
                mn = x;
        }
        if (mn % 2 == 0) {
            for (int x : nums1) {
                if (x % 2 != 0)
                    return false;
            }
        }

        return true;
    }
};