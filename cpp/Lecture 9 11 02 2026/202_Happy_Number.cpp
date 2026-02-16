class Solution {
public:
    bool isHappy(int n) {

        while (n != 1 && n != 4) {
            int total = 0;
            while (n > 0) {
                int d = n % 10;
                total += d * d;
                n /= 10;
            }
            n = total;
        }
        return n == 1;
    }
};
