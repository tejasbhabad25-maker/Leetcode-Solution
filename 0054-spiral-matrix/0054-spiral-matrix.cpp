class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        vector<int> ans;

        int m = arr.size();
        int n = arr[0].size();

        int rst = 0, rend = m - 1;
        int cst = 0, cend = n - 1;

        while (rst <= rend && cst <= cend) {

            // top
            for (int i = cst; i <= cend; i++) {
                ans.push_back(arr[rst][i]);
            }
            rst++;
            
            // right
            for (int i = rst; i <= rend; i++) {
                ans.push_back(arr[i][cend]);
            }
            cend--;
            
            // bottom
            if(rst<=rend){
                for (int i = cend; i >= cst; i--) {
                  ans.push_back(arr[rend][i]);
                }
            }
            rend--;

            // left
            if(cst<=cend){
                for (int i = rend; i >=rst; i--) {
                    ans.push_back(arr[i][cst]);
                }
            }
            cst++;
        }
        return ans;
    }
};
