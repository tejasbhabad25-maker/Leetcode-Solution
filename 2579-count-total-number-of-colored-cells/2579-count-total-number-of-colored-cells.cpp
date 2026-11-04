class Solution {
public:
    long long coloredCells(int n) {

        /*
        1 -> 1
        2 -> 5
        3 -> 13
        4 -> 25
        5 -> 41
        6 -> 61
        7 -> 85
        8 -> 113

        */
        
        long long a = 1LL*n*n;
        long long b = 1LL*(n-1)*(n-1);

        return a+b;

    }
};