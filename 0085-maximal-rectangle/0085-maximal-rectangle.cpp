class Solution {
public:

    int func(vector<int>arr){

        int n=arr.size();
        int ans=0;
        vector<int>st;

        for(int i=0;i<n;i++){

            while(!st.empty() && arr[st.back()]>arr[i]){
                int height=st.back();
                st.pop_back();

                int nse=i;
                int pse=st.empty()?-1:st.back();

                ans=max(ans,arr[height]*(nse-pse-1));
            }
            st.push_back(i);
        }
        
        while(!st.empty()){

            int nse=n;
            int height=st.back();
            st.pop_back();

            int pse=st.empty()?-1:st.back();
            ans=max(ans,arr[height]*(nse-pse-1));
        }
        return ans;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>height(m,0);
        int ans=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='1'){
                    height[j]++;
                }
                else{
                    height[j]=0;
                }
            }
            int area=func(height);
            ans=max(ans,area);
        }
        return ans;
    }
};