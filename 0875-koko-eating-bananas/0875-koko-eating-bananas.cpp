class Solution {
public:
    long long totalhours(vector<int>& piles, int hour) {
    long long total = 0;

    for (int i = 0; i < piles.size(); i++) {
        total += (piles[i] + (long long)hour - 1) / hour;
    }

    return total;
}

    int minEatingSpeed(vector<int>& piles, int h) {
        int ans = 0;
        int n = piles.size();
        int low = 1;
        int maxi = piles[0];
        for (int i = 0; i < n; i++) {
            if (piles[i] > maxi)
                maxi = piles[i];
        }

        int high = maxi;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long total = totalhours(piles, mid);
            if (total <= h) {
                ans = mid;
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return ans;
    }
};