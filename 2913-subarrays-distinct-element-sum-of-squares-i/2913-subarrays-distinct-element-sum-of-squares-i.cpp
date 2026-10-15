class Solution {
public:
    int sumCounts(vector<int>& nums) {


        // 1 2 1

        unordered_set<int> s;
        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {

            s.clear();

            for (int j = i; j < n; j++) {
                s.insert(nums[j]);
                
                long long N = s.size();
                N = N * N;

                ans += N;
            }
        }
        return ans;
    }
};