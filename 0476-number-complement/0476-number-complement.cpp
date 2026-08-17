class Solution {
public:
    int findComplement(int n) {
        if (n == 0) {
            return 1;
        }

        // if we take xor of each digit with 1 then we can flip it
        // but , if we run for loop then it will go till 32 bits
        // so for 5 -> 3 bits , for 10 -> 4 bits having 1
        int original = n;

        int ans = 0;
        while (n > 0) {
            ans = (ans << 1) | 1;
            // take n=5 and ans=0 so 0<<1 is 00|1 will give 01
            // then n=2 01<<1 is 010|1 is 011
            // then n=1 011<<1 is 0110|1 is 0111
            // first we are creating space then making it 1

            n = n >> 1; // n=n/2;
        }
        return (original ^ ans);
    }
};