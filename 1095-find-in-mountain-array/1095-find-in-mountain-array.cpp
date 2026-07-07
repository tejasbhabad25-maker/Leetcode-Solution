/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int tar, MountainArray &arr) {

        int n = arr.length();

        int st = 1, end = n - 2;
        int idx = -1;
        int ans = INT_MAX;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            int left = arr.get(mid - 1);
            int curr = arr.get(mid);
            int right = arr.get(mid + 1);

            if (curr == tar) {
                ans = min(ans, mid);
            }

            if (left < curr && curr > right) {
                idx = mid;
                break;
            }
            else if (left < curr) {
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        // left
        int low = 0, high = idx - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            int curr = arr.get(mid);

            if (curr == tar) {
                ans = min(ans, mid);
                break;
            }
            else if (curr < tar) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        // right
        int LOW = idx + 1, HIGH = n - 1;
        while (LOW <= HIGH) {
            int mid = LOW + (HIGH - LOW) / 2;

            int curr = arr.get(mid);

            if (curr == tar) {
                ans = min(ans, mid);
                break;
            }
            else if (curr > tar) {
                LOW = mid + 1;
            }
            else {
                HIGH = mid - 1;
            }
        }
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};