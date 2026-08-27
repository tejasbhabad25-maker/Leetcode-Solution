class Solution {
public:
    int totalFruit(vector<int>& arr) {

        int n = arr.size();
        int l = 0, r = 0;
        // 1 1 1 2 2 2 2 3 3 3 3

        unordered_map<int, int> m;
        int len = INT_MIN;

        while (r < n) {

            m[arr[r]]++;

            while (m.size() > 2) {
                m[arr[l]]--;

                if (m[arr[l]] == 0) {
                    m.erase(arr[l]);
                }
                l++;
            }

            len = max(len, r - l + 1);

            r++;
        }

        return len;
    }
};