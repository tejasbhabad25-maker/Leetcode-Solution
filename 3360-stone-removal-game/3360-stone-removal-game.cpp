class Solution {
public:
    bool canAliceWin(int n) {

        int sub = 10;

        while (true) {

            if (n - sub >= 0) {
                n = n - sub;
                sub--;
            } else {
                return false;
            }

            if (n - sub >= 0) {
                n = n - sub;
                sub--;
            } else {
                return true;
            }
        }
    }
};