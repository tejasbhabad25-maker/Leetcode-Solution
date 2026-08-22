class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        /* IMPLEMENTATION
            cal NGE arr for nums2 and in map store nums2 (map of el:idx)
            for(i=0->n1) for nums1
            find the el of nums1 in map and get their idx to access NGE from arr

        */

        // cal NGE for nums2
        stack<int> st;
        int n2 = nums2.size();
        vector<int> NGI(n2, 0);

        for (int i = n2 - 1; i >= 0; i--) {
            
            while(!st.empty() && st.top()<=nums2[i]){
                st.pop();
            }
            if(st.empty()){
                NGI[i]=-1;
            }
            else{
                NGI[i]=st.top();
            }
            
            st.push(nums2[i]);
        }

        unordered_map<int, int> m;
        for (int i = 0; i < n2; i++) {
            m[nums2[i]] = i;
        }

        int n1 = nums1.size();
        vector<int> ans;
        for (int i = 0; i < n1; i++) {
            int idx = m[nums1[i]];
            ans.push_back(NGI[idx]);
        }
        return ans;
    }
};