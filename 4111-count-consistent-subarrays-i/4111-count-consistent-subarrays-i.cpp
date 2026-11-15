class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            int andVal = nums[i];
            int minVal = nums[i];

            for (int j = i; j < n; j++) {
                andVal &= nums[j];
                minVal = min(minVal, nums[j]);

                if (andVal == minVal) {
                    count++;
                }
            }
        }

        return count;
    }
};