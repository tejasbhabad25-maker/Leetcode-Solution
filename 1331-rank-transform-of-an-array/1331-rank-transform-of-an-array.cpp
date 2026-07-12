class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        int n = arr.size();

        vector<int> temp(arr.begin(), arr.end());
        sort(temp.begin(),temp.end());

        unordered_map<int, int> m;

        // storing rank in m using sorted arr(temp)
        int rank=1;
        // we create rank instead of i+1 because
        /*
            arr=[100,100,200]
            map will be 100 -> 1 and 200 -> 3 but the 200 should get 2 
        */
        for (int i = 0; i < n; i++) {
            if (m.find(temp[i]) == m.end()) {
                m[temp[i]] = rank;
                rank++;
            }
        }

        // Traverse the original array and replace each element with its rank from the map
        vector<int> ans(n, 0);
        for (int i = 0; i < n; i++) {
            ans[i] = m[arr[i]];
        }

        return ans;
    }
};