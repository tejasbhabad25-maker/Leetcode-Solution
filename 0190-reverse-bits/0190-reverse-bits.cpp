class Solution {
public:
    int reverseBits(int n) {

        int ans = 0;

        for (int i = 0; i < 32; i++) {
            ans = ans << 1;      // make space for next bit
            ans = ans | (n & 1); // take rightmost bit of n and putting in ans
            n = n >> 1;          // remove rightmost bit
        }
        return ans;
    }
};