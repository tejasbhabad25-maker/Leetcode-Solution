class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        int n = arr1.size();
        unordered_map<int, int> m;

        for (int v : arr1) {
            m[v]++;
        }

        vector<int> ans;

        for (int i = 0; i < arr2.size(); i++) {
            while (m.find(arr2[i]) != m.end()) {
                ans.push_back(arr2[i]);
                m[arr2[i]]--;

                if (m[arr2[i]] == 0) {
                    m.erase(arr2[i]);
                }
            }
        }
        vector<int> temp;
        for (auto v : m) {
            while (v.second > 0) {
                temp.push_back(v.first);
                v.second--;
            }
        }

        sort(temp.begin(), temp.end());

        ans.insert(ans.end(), temp.begin(), temp.end());

        return ans;
    }
};