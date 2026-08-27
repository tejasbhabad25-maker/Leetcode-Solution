class Solution {
public:
    vector<int> psee(vector<int>arr, int n) {
        vector<int> ans(n);
        stack<int> st;

        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] > arr[i])
                st.pop();

            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        return ans;
    }

    vector<int> nse(vector<int>arr, int n) {
        vector<int> ans(n);
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i])
                st.pop();

            ans[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        return ans;
    }

    int sumSubarrayMins(vector<int>& arr) {

        // note in NSE and PSSE we have stored index for the answers
        int n=arr.size();
        vector<int>NSE=nse(arr,n);
        vector<int>PSSE=psee(arr,n);

        long long mod=1e9+7;
        long long total=0;

        for(int i=0;i<n;i++){
            int left = i - PSSE[i];
            int right = NSE[i] - i;

            long long contribution=(1LL*left*right*arr[i])%mod;
            total=(total+contribution)%mod;
        }
        return (int)total;
    }
};