class Solution {
public:
    int firstocc(vector<int>&arr, int size, int key) {

        int start = 0, end = size - 1;
        int mid = start + (end - start) / 2;
        int ans = -1;
        while (start <= end) {
            if (arr[mid] == key) {
                ans = mid;
                end = mid - 1;
            } else if (key > arr[mid]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
            mid = (start + end) / 2;
        }
        return ans;
    }
    int lastocc(vector<int>&arr, int size, int key) {

        int start = 0;
        int end = size - 1;
        int mid = start + (end - start) / 2;
        int ans = -1;
        while (start <= end) {
            if (arr[mid] == key) {
                ans = mid;
                start = mid + 1;
            } else if (key > arr[mid]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
            mid = (start + end) / 2;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first = firstocc(nums, n, target);
        int last = lastocc(nums, n, target);
        vector<int> ans;
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};