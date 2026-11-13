class Solution {
public:
    bool isThree(int n) {

        unordered_set<double> s = {2,  3,  5,  7,  11, 13, 17, 19, 23,
                                   29, 31, 37, 41, 43, 47, 53, 59, 61,
                                   67, 71, 73, 79, 83, 89, 97};

        double root = sqrt(n);

        if (s.find(root) != s.end()) {
            return true;
        }
        return false;
    }
};