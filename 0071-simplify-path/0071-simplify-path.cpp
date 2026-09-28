class Solution {
public:
    string simplifyPath(string s) {

        /*
        take path = "//home////foo///"

        traverse path we got / then check if there are multiple /
        after that take string temp push the word between two slash
        before pushing if it is . then don't do anything .. pop
        else push that in stack.

        path will also have _ (given in constraints)
        */

        vector<string>st;
        int n = s.size();
        int i = 0;
        for(int i=0;i<n;i++){

            while (i < n && s[i] == '/') {
                i++;
            }

            // taking temp string between two slash
            string temp;
            // temp.push_back('/');
            while (i < n && s[i] != '/') {
                temp.push_back(s[i]);
                i++;
            }

            if (temp == "." || temp=="")
                continue;
            else if (temp != "..") {
                st.push_back(temp);
            }
            else if(temp==".."){
                if(st.empty()) continue;
                else st.pop_back();
            }

        }
        if(st.empty()) return "/";

        string ans;
        for(auto str:st){
            ans+="/"+str;
        }

        return ans;
    }
};
