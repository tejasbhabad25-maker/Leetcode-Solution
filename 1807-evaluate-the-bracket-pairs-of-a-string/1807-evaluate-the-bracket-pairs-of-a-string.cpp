class Solution {
public:

    // MY APPROACH WHICH WAS GETTING TLE

    // str is the string , s is the set , mat is 2D array
        // int n = str.size();
        // unordered_set<string> s;
        // int i = 0;

        // while (i < n) {
        //     if (str[i] == '(') {
        //         int j = i + 1;
        //         string temp;
        //         while (str[j] != ')') {
        //             temp.push_back(str[j]);
        //             j++;
        //         }
        //         s.insert(temp);
        //         i = j;
        //     }
        //     i++;
        // }

        // unordered_map<string, string> m;

        // int N = mat.size();
        // for (int i = 0; i < N; i++) {
        //     m[mat[i][0]] = mat[i][1];
        // }

        // for (auto v : s) {

        //     if (m.find(v) != m.end()) {

        //         // we want to replace all the occurences , 
        //         // idx will be that "("+ v +")" and length will size of v + 2
        //         int idx;

        //         while ((idx = str.find("(" + v + ")")) != string::npos) {
        //             int len = v.size() + 2;
        //             str.replace(idx, len, m[v]);
        //         }
        //     }
        //     else {
        //         // if m does not contains the v which means we need to replace
        //         // the v from str to ?
        //         int idx;

        //         while ((idx = str.find("(" + v + ")")) != string::npos) {
        //             int len = v.size() + 2;
        //             str.replace(idx, len, "?");
        //         }
        //     }
        // }
        // return str;

    string evaluate(string str, vector<vector<string>>& mat) {


        // algorithm :
        // store key,value of mat in map m
        // create string ans and scan str
        // while scanning there will be only two options either it can be '(' or a lowercase alpha
        // if we got an '(' then while we don't get ')' push everthing in a string temp

        // now find if that temp exist in map if yes then then ans+=value of key
        // or else ans+="?"

        // now if we got an alphabet then just push it to the ans

        int n=str.size();

        // store the mat in a map
        unordered_map<string,string> m;
        for(int i = 0;i<mat.size();i++){
            
            m[mat[i][0]]=mat[i][1];
        }
        
        string ans="";

        for(int i=0;i<n;i++){

            if(str[i]=='('){

                i++; // skip the '(' idx
                string temp;
                while(i<n && str[i]!=')'){
                    temp.push_back(str[i]);
                    i++;
                }

                // now the temp contains the word between (..)

                if(m.find(temp)!=m.end()){
                    ans+=m[temp];
                }
                else{
                    ans+="?";
                }

            }
            else{
                ans+=str[i];
            }
        }
        return ans;
    }
};