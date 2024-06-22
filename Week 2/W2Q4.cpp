class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1.0;
        
        if (n < 0) {
            return 1.0 / (x * myPow(x, -(n + 1))); 
        }
        
        double half = myPow(x, n / 2);
        double result = half * half;
        
        if (n % 2 != 0) {
            result *= x;
        }
        
        return result;
    }
};
