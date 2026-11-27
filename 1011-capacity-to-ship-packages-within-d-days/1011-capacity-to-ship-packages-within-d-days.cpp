class Solution {
public:
    int daysReq(vector<int>& weights, int cap) {
        int load, d = 0;
        for (int i = 0; i < weights.size(); i++) {
            if (load + weights[i] > cap) {
                d = d + 1;
                load = weights[i];
            } else
                load += weights[i];
        }
        return d;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int maxi = weights[0];
        int sum = 0;
        for (int i = 0; i < weights.size(); i++) {
            if (weights[i] > maxi)
                maxi = weights[i];
            sum += weights[i];
        }
        int low = maxi;
        int high = sum;
        while (low <= high) {
            int mid = (low + (high - low) / 2);
            int numberofdays = daysReq(weights, mid);
            if (numberofdays <= days) {
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return low;
    }
};