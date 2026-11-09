class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {

        int pr_first = -1;
        int pr_second = -1;
        int n = nums.size();

        for (int i = 0; i < n; i++) {

            bool flag = true;
            int num = nums[i];

            if (num < 2) {
                flag = false;
                continue;
            }

            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                pr_first = i;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--) {

            bool flag = true;
            int num = nums[i];

            if (num < 2) {
                flag = false;
                continue;
            }

            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                pr_second = i;
                break;
            }
        }

        return pr_second - pr_first;
    }
};