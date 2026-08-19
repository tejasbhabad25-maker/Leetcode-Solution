class Solution {
public:
    int func(int n) {
        if (n == 0 || n == 1) {
            return (n == 0 ? 0 : 1);
        }

        return func(n - 1) + func(n - 2);
    }

    int fib(int n) {
        // 0 1 1 2 3

        return func(n);
    }
};