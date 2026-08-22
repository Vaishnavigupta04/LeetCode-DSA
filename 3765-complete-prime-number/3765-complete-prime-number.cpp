class Solution {
public:
    bool primenum(int n) {
        if(n<2)
        return false;
        for (int i = 2; i*i<= n; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    bool completePrime(int num) {
        int N = num;
        int i = 10;
        int count = 0;
        while (N != 0) {
            count++;
            N = N / 10;
        }
        N=num;
        for (int j = 1; j <= count; j++) {
            int digit = N % i;
            int q = N / i;
            if (!primenum(digit))
            return false;
            if(j<count && !primenum(q))
                return false;
            i = i * 10;
        }
        return true;
    }
};