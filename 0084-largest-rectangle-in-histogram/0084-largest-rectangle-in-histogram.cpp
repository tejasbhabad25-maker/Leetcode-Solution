class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        
        int ans=0;
        int n=arr.size();
        vector<int>st;
        st.reserve(n+1);

        for(int i=0;i<n;i++){
            
            while(!st.empty() && arr[st.back()]>arr[i]){
                int a=st.back();
                st.pop_back();

                int nse=i;
                int pse=st.empty()?-1:st.back();

                ans=max(ans,arr[a]*(nse-pse-1));
            }
            st.push_back(i);
        }
        while(!st.empty()){
            // as there are elements in the stack which means there is no nse
            int nse=n;
            int a=st.back();
            st.pop_back();

            int pse=st.empty()?-1:st.back();
            ans=max(ans,arr[a]*(nse-pse-1));
        }
        return ans;
    }
};