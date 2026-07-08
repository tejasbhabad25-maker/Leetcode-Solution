class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int num=1;
        vector<vector<int>>ans(n , vector<int>(n));

        int rst=0 , rend=n-1;
        int cst=0 , cend=n-1;

        while (rst <= rend && cst <= cend) {

            // top
            for (int i = cst; i <= cend; i++) {
                ans[rst][i]=num;
                num++;
            }
            rst++;
            
            // right
            for (int i = rst; i <= rend; i++) {
                ans[i][cend]=num;
                num++;
            }
            cend--;
            
            // bottom
            if(rst<=rend){
                for (int i = cend; i >= cst; i--) {
                  ans[rend][i]=num;
                  num++;
                }
            }
            rend--;

            // left
            if(cst<=cend){
                for (int i = rend; i >=rst; i--) {
                    ans[i][cst]=num;
                    num++;
                }
            }
            cst++;
        }
        return ans;
    }
};