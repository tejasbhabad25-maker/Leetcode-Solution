class Solution {
public:
    int bulbSwitch(int n) {

        /*
        1 1 1 1
        1 0 1 0
        1 0 0 0
        1 0 0 1

        n = 1  -> 1
        n = 2  -> 1
        n = 3  -> 1
        n = 4  -> 2
        n = 5  -> 2
        n = 6  -> 2
        n = 7  -> 2
        n = 8  -> 2
        n = 9  -> 3
        n = 10 -> 3

        */
        return sqrt(n);
    }
};