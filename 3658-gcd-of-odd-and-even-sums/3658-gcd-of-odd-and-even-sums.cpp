class Solution {
public:
    int gcdOfOddEvenSums(int n) {

        int odd_sum = 0, j = 1;
        for (int i = 1; i <= n; i++) {
            odd_sum += j;
            j += 2;
        }

        int even_sum = 0, k = 2;
        for (int i = 1; i <= n; i++) {
            even_sum += k;
            k += 2;
        }

        int GCD = 1;
        int a=odd_sum;
        int b=even_sum;

        if (a == 0 && b != 0) {
            GCD = b;
        }
        if (a != 0 && b == 0) {
            GCD = a;
        }
        for (int i = 1; i < min(a, b); i++) {
            if (a % i == 0 && b % i == 0) {
                GCD = i;
            }
        }
        return GCD;
    }
};