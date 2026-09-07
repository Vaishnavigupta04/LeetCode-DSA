class Solution {
public:
    int pivotInteger(int n) {
        int total = n * (n + 1) / 2;

        for (int i = 1; i <= n; i++) {
            int sum = i * (i + 1) / 2;
            int sum1 = total - (i - 1) * i / 2;
            if (sum == sum1)
                return i;
        }
         return -1;
    }
};