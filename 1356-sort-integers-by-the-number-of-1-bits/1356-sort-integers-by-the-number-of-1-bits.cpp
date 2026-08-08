class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {

        vector<vector<int>>mat;

        for(int x:arr){
            int ct=0;
            for(int i=0;i<32;i++){
                if(x & (1<<i)){
                    ct++;
                }
            }
            mat.push_back({ct,x});
        }
        sort(mat.begin(),mat.end());
        
        vector<int>ans;
        for(int i=0;i<mat.size();i++){
            ans.push_back(mat[i][1]);
        }
        
        return ans;
    }
};