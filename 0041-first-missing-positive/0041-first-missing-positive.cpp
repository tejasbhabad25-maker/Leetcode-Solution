class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        unordered_set<int> s(nums.begin(), nums.end());
        int n = nums.size();

        for (int i = 1; i <= n; i++) {
            if(s.find(i)==s.end()){
                return i;
            }
        }
        return n + 1;
    }
};