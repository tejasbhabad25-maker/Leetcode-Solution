class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        
        vector<vector<int>> mat;

        for (int x : arr) {
            int original = x;
            int ct = 0;

            while (x) {
                // here we are changing value of x thus use other var to store x i.e original
                x = x & (x - 1);
                ct++;
            }

            mat.push_back({ct, original});
        }

        sort(mat.begin(), mat.end());

        vector<int> ans;

        for (int i = 0; i < mat.size(); i++) {
            ans.push_back(mat[i][1]);
        }

        return ans;
    }
};