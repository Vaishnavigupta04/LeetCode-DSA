class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0)
            return false;
        int number = x;
        long long answer = 0;
        while (number != 0) {
            int digit = number % 10;
            answer = answer * 10 + digit;
            number = number / 10;
        }
        if (x == answer)
            return true;
        else
            return false;
    }
};