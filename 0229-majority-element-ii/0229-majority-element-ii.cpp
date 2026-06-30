class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        int n = arr.size();
        vector<int>ans;

        int ct1 = 0, ct2 = 0;
        int el1=INT_MAX;
        int el2=INT_MAX; // el1 and el2 must be initialized because they are compared (arr[i] != el2 and arr[i] != el1) before they are guaranteed to be assigned during the algorithm. Initializing them avoids reading uninitialized variables.

        for (int i = 0; i < n; i++) {

            if (ct1 == 0 && arr[i]!=el2) { // here we will make sure that el1!=el2
                el1 = arr[i];
                ct1 = 1;
            } else if (ct2 == 0 && arr[i]!=el1) {
                el2 = arr[i];
                ct2 = 1;
            }

            else if (el1 == arr[i]) {
                ct1++;
            } else if (el2 == arr[i]) {
                ct2++;
            }

            else{
                ct1--;
                ct2--;
            }
        }

        int c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == el1) {
                c1++;
            }
            if (arr[i] == el2) {
                c2++;
            }
        }

        if (c1 > n / 3) {
            ans.push_back(el1);
        }
        if (c2 > n / 3) {
            ans.push_back(el2);
        }
        return ans;
    }
};