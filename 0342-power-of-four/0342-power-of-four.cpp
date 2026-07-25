class Solution {
public:
    bool isPowerOfFour(int n) {
        /*
        2 => 10
        8 => 1000
        32 => 100000

        4 => 100
        16 => 10000
        64 => 1000000

        we can see that the number of zeroes in the power of 4 are even
        or the set bit is at even idx while in power of 2 set bit is at odd idx
        */

        if (n <= 0) {
            return false;
        }
        
        // if it is not power of 2
        if(n & (n-1)){
            return false;
        }

        int idx = 0;
        while (n > 1) {
            n = n >> 1;
            idx++;
        }

        if (idx % 2 == 0) {
            return true;
        }

        return false;
    }
};