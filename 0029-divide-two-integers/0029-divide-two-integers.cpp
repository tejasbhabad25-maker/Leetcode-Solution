class Solution {
public:
    int divide(int dividend, int divisor) {

        if (dividend == divisor)
            return 1;

        int sign = 1;
        if (divisor >= 0 && dividend < 0) {
            sign = -1;
        }
        if (divisor < 0 && dividend > 0) {
            sign = -1;
        }

        // long long n=abs(dividend);
        // long long d=abs(divisor);

        // here first they are converted to +ve then stored in long long
        // but we want to first make it long long then stored

        // Storing absolute dividend & divisor
        long long n = dividend;
        long long d = divisor;

        n = abs(n);
        d = abs(d);

        long long ans = 0;

        while (n >= d) {
            int ct = 0;

            while (n >= (d << (ct + 1))) {
                ct++;
            }
            n = n - (d << (ct));
            ans += (1LL << ct);
        }
        if (ans > INT_MAX && sign == 1) {
            return INT_MAX;
        }
        if (ans > INT_MAX && sign == -1) {
            return INT_MIN;
        }
        
        if (sign == -1) {
            return -ans;
        }

        return ans;
    }
};