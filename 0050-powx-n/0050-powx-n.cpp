class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;
        double power = 1;
        if (n == 0)
            return 1;
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        while (N > 0) {
            if (N % 2 == 1)
                power = power * x;
            x = x * x;
            N = N / 2;
        }

        return power;
    }
};