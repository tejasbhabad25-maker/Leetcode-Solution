class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        // int n = nums.size();

        // for (int i = 0; i < n; i++) {
        //     int idx = abs(nums[i]) - 1;

        //     if (nums[idx] < 0)
        //         return abs(nums[i]);
        //     nums[idx] = -nums[idx];
        // }
        // return -1;

        //  As modification is not allowed

        int slow = 0, fast = 0;
        slow = nums[slow];
        fast = nums[nums[fast]];

        while (slow != fast) {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        slow = 0;
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};