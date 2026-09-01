class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        
        stack<int>st;
        int ans=0;
        int n=arr.size();

        for(int i=0;i<n;i++){
            
            while(!st.empty() && arr[st.top()]>arr[i]){
                int a=st.top();
                st.pop();

                int nse=i;
                int pse=st.empty()?-1:st.top();

                ans=max(ans,arr[a]*(nse-pse-1));
            }
            st.push(i);
        }
        while(!st.empty()){
            // as there are elements in the stack which means there is no nse
            int nse=n;
            int a=st.top();
            st.pop();

            int pse=st.empty()?-1:st.top();
            ans=max(ans,arr[a]*(nse-pse-1));
        }
        return ans;
    }
};