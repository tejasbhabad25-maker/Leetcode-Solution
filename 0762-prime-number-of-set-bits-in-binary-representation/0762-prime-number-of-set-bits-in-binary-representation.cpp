class Solution {
public:
    bool func(int i) {

        int ct = __builtin_popcount(i);

        if (ct == 2 || ct == 3 || ct == 5 || ct == 7 || ct == 11 || ct == 13 ||
        ct == 17 || ct == 19 || ct == 23 || ct == 29 || ct == 31)
            {
                return true;
            }
        return false;
    }

    int countPrimeSetBits(int left, int right) {

        int n = right - left;
        int ans = 0;
        for (int i = left; i <= right; i++) {
            if (func(i)) {
                ans++;
            }
        }
        return ans;
    }
};