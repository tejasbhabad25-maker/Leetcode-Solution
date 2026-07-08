class Solution {
public:
    int cal(vector<int>& arr, int day, int k) {
        int ct = 0, bouquets = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] <= day) {
                ct++;
            }

            else {
                bouquets = bouquets + (ct / k);
                ct = 0;
            }
        }
        bouquets = bouquets + (ct / k);
        return bouquets;
    }

    int minDays(vector<int>& arr, int m, int k) {
        int n = arr.size();

        if ((long long)m * k > n) {
            return -1;
        }

        int max_el = INT_MIN, min_el = INT_MAX;
        for (int i = 0; i < n; i++) {
            max_el = max(max_el, arr[i]);
            min_el = min(min_el, arr[i]);
        }

        int st = min_el, end = max_el;
        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (cal(arr, mid, k) >= m) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        return st;
    }
};