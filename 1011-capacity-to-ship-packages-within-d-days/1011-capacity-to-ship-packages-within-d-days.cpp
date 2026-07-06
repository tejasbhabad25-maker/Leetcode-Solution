class Solution {
public:

    int cal_days(vector<int> &arr , int capacity){

        int load=0 ,  DAYS=1;
        for(int i=0;i<arr.size();i++){
            if(load+arr[i]>capacity){
                DAYS++;
                load=arr[i];
            }
            else{
                load+=arr[i];
            }
        }
        return DAYS;
    }

    int shipWithinDays(vector<int>& arr, int days) {
        int n=arr.size();

        int max_el = INT_MIN, sum = 0;
        for (int i = 0; i < n; i++) {
            max_el = max(max_el, arr[i]);
            sum += arr[i];
        }

        int st = max_el, end = sum;
        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (cal_days(arr, mid) <= days) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        return st;
    }
};