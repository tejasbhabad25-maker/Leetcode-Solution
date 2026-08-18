class Solution {
public:
    int largestInteger(vector<int>& arr, int k) {

        int n = arr.size();

        unordered_map<int, int> m;

        // if this is true then output will be largest element but if it has
        // freq=1
        if (k == 1) {
            for (int i = 0; i < n; i++) {
                m[arr[i]]++;
            }
            int max_el = -1;
            for (int i = 0; i < n; i++) {
                if (m[arr[i]] == 1) {
                    if (arr[i] > max_el) {
                        max_el = arr[i];
                    }
                }
            }
            return max_el;
        }

        if(k==n){
            int max_el=-1;
            for(int i=0;i<n;i++){
                max_el=max(max_el,arr[i]);
            }
            return max_el;
        }

        int l = 0, r = k - 1;
        // creating first window
        for (int i = 0; i <= r; i++) {
            m[arr[i]]++;
        }
        while (r < n) {
            l++;
            r++;
            if (r >= n)
                break;

            for (int i = l; i <= r; i++) {
                m[arr[i]]++;
            }
        }
        
        int max_el = -1;
        for (int i = 0; i < n; i++) {
            if (m[arr[i]] == 1) {
                if (arr[i] > max_el) {
                    max_el = arr[i];
                }
            }
        }
        return max_el;
    }
};