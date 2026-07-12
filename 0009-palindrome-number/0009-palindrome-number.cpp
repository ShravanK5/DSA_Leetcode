class Solution {
public:
    bool isPalindrome(int x) {
        int n =x;
        if (x < 0) {
            return false;
        } else {
            long long rev = 0;

            while (n > 0) {

                long long digit = n % 10;

                rev = rev * 10 + digit;

                n = n / 10;
            }
            return rev == x;
        }
    }
};