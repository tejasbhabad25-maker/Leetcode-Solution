class Solution {
public:
    int longestMonotonicSubarray(vector<int>& arr) {

        int n = arr.size();

        int longest = 1;
        int ct = 1;
        for (int i = 1; i < n; i++) {
            if (arr[i - 1] < arr[i]) {
                ct++;
                longest = max(longest, ct);
            }
            else {
                ct = 1;
            }
        }

        int smallest = 1;
        ct = 1;
        for (int i = 1; i < n; i++) {
            if (arr[i - 1] > arr[i]) {
                ct++;
                smallest = max(smallest, ct);
            }
            else {
                ct = 1;
            }
        }
        return longest > smallest ? longest : smallest;
    }
};