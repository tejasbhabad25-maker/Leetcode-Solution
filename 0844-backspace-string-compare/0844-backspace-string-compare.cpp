class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        string st1;
        string st2;

        for(char ch:s){
            if(ch=='#'){
                if(!st1.empty()){
                    st1.pop_back();
                }
            }
            else{
                st1.push_back(ch);
            }
        }

        for(char ch:t){
            if(ch=='#'){
                if(!st2.empty()){
                    st2.pop_back();
                }
            }
            else{
                st2.push_back(ch);
            }
        }
        return st1==st2;


    }
};