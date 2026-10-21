class Solution {
public:
    int longestValidParentheses(string s) {
        
        stack<int>st;

        st.push(-1);
        int n=s.size();
        int ans=0;

        for(int i=0;i<n;i++){

            if(s[i]=='('){
                st.push(i);
            }
            else{
                st.pop();

                if(st.empty()){
                    // we have pop the -1 so the new boundary will be that index of
                    // Unmatched )
                    st.push(i);
                }
                else{
                    ans = max(ans, i - st.top());
                }
            }
        }
        return ans;
    }
};