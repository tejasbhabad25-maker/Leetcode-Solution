class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        
        int n=arr.size();
        vector<int>st;

        for(int i=0;i<n;i++){

            if(arr[i]>0){
                st.push_back(arr[i]);
            }
            else{
                while(!st.empty() && st.back()>0 && abs(arr[i])>st.back()){
                    st.pop_back();
                }
                if(!st.empty() && abs(arr[i])==st.back()){
                    st.pop_back();
                }
                else if(st.empty() || st.back()<0){
                    st.push_back(arr[i]);
                }
            }
        }
        return st;
    }
};