class Solution {
public:
    int reverse(int num) {
        int rev = 0;

        while (num > 0) {
            int digit = num % 10;
            rev = rev * 10 + digit;
            num = num / 10;
        }

        return rev;
    }

    int mirrorDistance(int n) {
        int original = n;
        int rev = reverse(n);

        int difference = abs(original - rev);
        return difference;
    }
};