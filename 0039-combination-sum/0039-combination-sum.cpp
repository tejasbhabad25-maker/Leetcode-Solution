class Solution {
public:
    void solve(int idx, int sum, vector<int>& temp, vector<vector<int>>& ans,
               vector<int> arr) {

        if (sum == 0) {
            ans.push_back(temp);
            return;
        }
        if (idx == arr.size()) {
            // here it means sum is not equal to zero
            return;
        }

        if (sum - (arr[idx]) >= 0) {
            temp.push_back(arr[idx]);
            solve(idx, sum - arr[idx], temp, ans, arr);
            temp.pop_back();
        }
        solve(idx + 1, sum, temp, ans, arr);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int>> ans;
        vector<int> temp;

        solve(0, target, temp, ans, candidates);

        return ans;
    }
};