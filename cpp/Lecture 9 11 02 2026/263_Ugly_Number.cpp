class Solution {
public:
    bool isUgly(int n) {
    
        if (n <= 0) return false;

        if (n == 1) return true;

        vector<int> primeFactors = {2, 3, 5};
        
        for (int p : primeFactors) {
            while (n % p == 0) {
                n /= p;
            }
        }
        return n == 1;
    }
};
