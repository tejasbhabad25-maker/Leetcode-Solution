class Solution {
public:
    int calPoints(vector<string>& arr) {

        stack<int>st;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            if (isdigit(arr[i][0]) || arr[i][0] == '-') {
                st.push(stoi(arr[i]));
            }
            else if(arr[i]=="C"){
                st.pop();
            }
            else if(arr[i]=="D"){
                st.push(2*st.top());
            }
            else if(arr[i]=="+"){
                int first=st.top();
                st.pop();

                int second=st.top();
                st.pop();

                int sum=first+second;
                st.push(second);
                st.push(first);
                st.push(sum);
            }
        }
        int ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};