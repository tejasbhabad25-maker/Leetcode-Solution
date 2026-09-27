class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {

        int psum = 0, pmax = 0;
        int nsum = 0, nmax = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (psum < 0) {
                psum = 0;
            }
            psum += nums[i];
            pmax = max(pmax, psum);
        }

        for (int i = 0; i < nums.size(); i++) {
            if (nsum > 0) {
                nsum = 0;
            }
            nsum += nums[i];
            nmax = min(nmax, nsum);
        }
        return max(abs(pmax), abs(nmax));
    }
};