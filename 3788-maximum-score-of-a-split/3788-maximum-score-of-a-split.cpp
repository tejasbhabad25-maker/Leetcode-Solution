class Solution {
public:
    long long maximumScore(vector<int>& nums) {

        int n = nums.size();

        vector<int> suffix(n);
        int min_el = nums.back();

        for (int i = n - 1; i >= 0; i--) {
            suffix[i] = min_el;
            min_el = min(min_el, nums[i]);
        }

        long long ans = INT_MIN;
        long long sum = 0;

        for (int i = 0; i < n - 1; i++) {
            sum += nums[i];
            long long score = sum - suffix[i];

            ans = max(ans, score);
        }
        return ans;
    }
};