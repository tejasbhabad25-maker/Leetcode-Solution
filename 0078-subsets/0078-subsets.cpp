class Solution {
public:
    vector<vector<int>> subsets(vector<int>& arr) {
        // 1<<n => 2^n
        // for subsets total subsets will be 2^n
        int n=arr.size();
        vector<vector<int>>ans;

        int subset=1<<n;
        for(int i=0;i<subset;i++){
            vector<int>list;
            for(int j=0;j<n;j++){
                if(i & (1<<j)){
                    list.push_back(arr[j]);
                }
            }
            ans.push_back(list);
        }
        return ans;
    }
};