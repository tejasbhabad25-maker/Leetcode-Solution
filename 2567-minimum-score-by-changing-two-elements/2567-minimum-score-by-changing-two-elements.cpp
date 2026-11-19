class Solution {
public:
    int minimizeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int n = nums.size();

        // 9 27 33 59 81

        // case 1
        // nums[0] = nums.back();
        // nums[1] = nums.back();

        // long long low = 0;

        long long high1 = nums.back() - nums[2];

        // case 2
        int idx = n - 3;
        long long high2 = nums[idx] - nums[0];

        // case 3
        long long high3 = nums[n - 2] - nums[1];

        return min({high1, high2, high3});
    }
};