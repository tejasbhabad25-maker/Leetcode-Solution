class Solution {
public:
    string reverseParentheses(string s) {
        
        // etco
        // octe
        // edocteel
        // leetcode

        stack<pair<char,int>>st;
        // ( and it's idx

        int n=s.size();

        for(int i=0;i<n;i++){

            if(s[i]=='('){
                st.push({'(',i});
            }
            if(s[i]==')'){
                int start=st.top().second; // will give idx of last ( we want to +1
                reverse(s.begin()+start,s.begin()+i);
                st.pop();
            }
        }
        s.erase(remove(s.begin(), s.end(), '('), s.end());
        s.erase(remove(s.begin(), s.end(), ')'), s.end());

        return s;

    }
};