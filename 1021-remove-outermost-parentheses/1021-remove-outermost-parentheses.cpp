class Solution {
public:
    string removeOuterParentheses(string s) {

        int ct = 0;
        string ans;
        for (char ch : s) {
            if (ch == '(') {
                if (ct > 0){
                    ans += ch;
                }

                ct++;
            }
            else {
                ct--;

                if (ct > 0){
                    ans += ch;
                }
            }
        }
        return ans;
    }
};