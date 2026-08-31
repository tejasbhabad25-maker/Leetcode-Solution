class Solution {
public:
    vector<int> nse(vector<int> arr) {

        stack<int> st;
        vector<int> ans(arr.size(), 0);

        for (int i = arr.size() - 1; i >= 0; i--) {

            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            if (st.empty()) {
                ans[i] = -1;
            } else {
                ans[i] = st.top();
            }
            st.push(i);
        }
        return ans;
    }

    vector<int> pse(vector<int> arr) {

        stack<int> st;
        vector<int> ans(arr.size(), 0);
        // 2,1,5,6,2,3

        for (int i = 0; i < arr.size(); i++) {

            while (!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }
            if (st.empty()) {
                ans[i] = -1;
            } else {
                ans[i] = st.top();
            }
            st.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size();
        int ans = INT_MIN;

        vector<int> NSE = nse(arr); //   1 -1 4 4 -1 -1
        vector<int> PSE = pse(arr); //  -1 -1 1 2  1  4

        for (int i = 0; i < n; i++) {

            int left = PSE[i] == -1 ? -1 : PSE[i];
            int right = NSE[i] == -1 ? n : NSE[i];

            int len = abs(right - left - 1);
            ans = max(ans, len * arr[i]);
        }
        return ans;
    }
};