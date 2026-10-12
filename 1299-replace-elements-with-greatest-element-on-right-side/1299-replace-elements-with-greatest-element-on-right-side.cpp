class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        int n = arr.size();
        int max_el = -1;
        int prev = max_el;

        for (int i = n - 1; i >= 0; i--) {
            prev = max_el;
            max_el = max(max_el, arr[i]);
            arr[i] = prev;
        }
        return arr;
    }
};