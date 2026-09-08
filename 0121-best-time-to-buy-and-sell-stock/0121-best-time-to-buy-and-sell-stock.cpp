class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = prices[0];
        int profit = 0;
        for (int i = 0; i < n; i++) {
            if (prices[i] < mini)
                mini = prices[i];
            int currentprofit = prices[i] - mini;
            if (currentprofit > profit)
                profit = currentprofit;
        }
    return profit;
}
}
;