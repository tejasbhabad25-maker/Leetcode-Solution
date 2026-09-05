class Solution {
public:

    int firstStableIndex(vector<int>& arr, int k) {
        
        int n = arr.size();

        vector<int> prefix(n, 0);
        int max_el = INT_MIN;
        for(int i = 0; i < n; i++){
            max_el = max(max_el, arr[i]);
            prefix[i] = max_el;
        }

        vector<int> suffix(n, 0);
        int min_el = INT_MAX;
        for(int i = n - 1; i >= 0; i--){
            min_el = min(min_el, arr[i]);
            suffix[i] = min_el;
        }

        for(int i = 0; i < n; i++){
            if(prefix[i] - suffix[i] <= k){
                return i;
            }
        }

        return -1;
    }
};