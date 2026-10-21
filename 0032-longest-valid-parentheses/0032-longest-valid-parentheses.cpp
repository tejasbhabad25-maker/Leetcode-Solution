class Solution {
public:
    int longestValidParentheses(string s) {
        
        // stack<int>st;

        // st.push(-1);
        // int n=s.size();
        // int ans=0;

        // for(int i=0;i<n;i++){

        //     if(s[i]=='('){
        //         st.push(i);
        //     }
        //     else{
        //         st.pop();

        //         if(st.empty()){
        //             // we have pop the -1 so the new boundary will be that index of
        //             // Unmatched )
        //             st.push(i);
        //         }
        //         else{
        //             ans = max(ans, i - st.top());
        //         }
        //     }
        // }
        // return ans;


        // OPTIMAL APPROACH 

        /*

        Explain in vs code🙏

        */

        int open_ct=0 , close_ct=0;
        int n=s.size();
        int ans=0;

        // left -> right
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                open_ct++;
            }
            else{
                close_ct++;
            }

            if(close_ct>open_ct){
                // invalid
                open_ct=0;
                close_ct=0;
            }

            if(open_ct==close_ct){
                ans=max(ans,open_ct+close_ct);
            }
        }

        open_ct=0 , close_ct=0;
        // right to left
        for(int i=n-1;i>=0;i--){
            if(s[i]==')'){
                close_ct++;
            }
            else{
                open_ct++;
            }

            if(open_ct > close_ct){
                // invalid
                open_ct=0;
                close_ct=0;
            }

            if(open_ct==close_ct){
                ans=max(ans,open_ct+close_ct);
            }
        }

        return ans;

        // why we need to traverse from right to left
        // (()
        /*
        in left to right we assume that for opening there will be closing but for this
        opening is 2 and closing is 1 and the asnwer will be zero

        in right to left we will handle it

        */


    }
};