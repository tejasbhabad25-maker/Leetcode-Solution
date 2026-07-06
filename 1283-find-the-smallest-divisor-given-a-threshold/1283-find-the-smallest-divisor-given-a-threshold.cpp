class Solution {
public:

    int cal(vector<int> &arr , int mid){
    int num=0;
    for(int i=0 ;i<arr.size();i++){
        num+=ceil((double)arr[i]/mid);
    }
    return num;
    }

    int smallestDivisor(vector<int>& arr, int threshold) {
        int n=arr.size();

        int max_el = INT_MIN;
        for (int i = 0; i < n; i++) {
            max_el = max(max_el, arr[i]);
        }

        int st = 1, end = max_el;
        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (cal(arr, mid) <= threshold) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        return st;
    }
};