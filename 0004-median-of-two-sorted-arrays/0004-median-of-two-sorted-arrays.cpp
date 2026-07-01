class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size(), m = arr2.size();
        int k = m + n;
        double res;

        vector<int> ans;

        for (int i = 0; i < n; i++) {
            ans.push_back(arr1[i]);
        }

        for (int i = 0; i < m; i++) {
            ans.push_back(arr2[i]);
        }
        sort(ans.begin(), ans.end());

        int st = 0, end = k - 1;
        int mid = st + (end - st) / 2;

        if (k % 2 != 0) {
            res = ans[mid];
        } else {
            res = ans[mid] + ans[mid + 1];
            res = res / 2;
        }
        return res;
    }
};