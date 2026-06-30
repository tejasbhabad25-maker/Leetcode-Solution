class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {

        int n = arr.size();
        unordered_map<int, int> m;
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            m[arr[i]]++;
        }

        for (auto v : m) {
            if (v.second > n / 3) {
                ans.push_back(v.first);
            }
        }
        return ans;
    }
};