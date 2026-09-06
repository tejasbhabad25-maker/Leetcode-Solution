class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {

        unordered_map<long long, int> m;
        // store sum,feq
        long long sum = 0;
        int ct = 0;

        m[0] = 1;

        for (int i = 0; i < arr.size(); i++) {

            sum += arr[i];

            // when sum==k => rem=0 , so m[0]=1 will handle it and ct will be +1

            long long rem = sum - k;

            if (m.find(rem) != m.end()) {
                ct += m[rem];
            }

            m[sum]++;
        }

        return ct;
    }
};