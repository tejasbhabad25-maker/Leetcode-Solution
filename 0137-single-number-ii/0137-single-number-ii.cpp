class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        
        for (int col = 0; col < 32; col++) {
            int ct = 0;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] & (1 << col)) {
                    ct++;
                }
            }
            if (ct % 3 != 0) {
                ans = ans | (1 << col);
            }
        }
        return ans;
    }
};