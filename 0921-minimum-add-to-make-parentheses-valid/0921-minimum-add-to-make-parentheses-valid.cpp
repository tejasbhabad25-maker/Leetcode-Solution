class Solution {
public:
    int minAddToMakeValid(string s) {
        
        //  "()))(("
        //  "((()))"


        int ct=0;
        int ans=0;
        for(char ch:s){
            if(ch=='('){
                ct++;
            }
            else{
                ct--;
            }
            if(ct<0){
                ans++;
                ct=0;
            }
        }

        ct=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==')'){
                ct++;
            }
            else{
                ct--;
            }
            if(ct<0){
                ans++;
                ct=0;
            }
        }
        return ans;
    }
};