class Solution {
public:
    vector<vector<int>> generate(int rows) {
        vector<vector<int>>pascal;

        for(int i=1;i<=rows;i++){
            vector<int>temp;
            int ans=1;
            temp.push_back(ans);
            for(int j=1;j<i;j++){
                ans=ans *(i-j)/j;
                temp.push_back(ans);
            }
            pascal.push_back(temp);
        }
        return pascal;
    }
};