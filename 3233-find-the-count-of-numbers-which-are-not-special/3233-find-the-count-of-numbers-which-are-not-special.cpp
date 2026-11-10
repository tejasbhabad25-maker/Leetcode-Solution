class Solution {
public:
    int nonSpecialCount(int l, int r) {
        /*
        consider 1 to 100
        instead of finding not special first find which are special

        4 , 9 , 25 , 49

        observations : for prime numbers there are only two divisor -> 1,that
        number but hame wo number nahi consider karna then for prime number
        excluding that number there is only one divisor if we take square of any
        prime number then there are only two divisor 1 and the prime number
        excluding the square

        */

        int low = ceil(sqrt(l));
        int high = sqrt(r);

        vector<bool> Prime(high + 1, true);

        Prime[0] = false;
        Prime[1] = false;

        for (int i = 2; i * i <= high; i++) {
            if (Prime[i]) {
                for (int j = i * i; j <= high; j += i) {
                    Prime[j] = false;
                }
            }
        }

        int ct = 0;

        for (int i = low; i <= high; i++) {
            if (Prime[i]) {
                ct++;
            }
        }

        return (r - l + 1) - ct;
    }
};