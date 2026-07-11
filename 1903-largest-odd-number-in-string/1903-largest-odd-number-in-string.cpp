class Solution {
public:
    string largestOddNumber(string s) {
        int n=s.size();
        string ans;

        if(s[n-1]%2==1){
            return s;
        }
        for(int i=n-1;i>=0;i--){
            if((s[i]-'0')%2==0){
                continue;
            }
            else{
                return s.substr(0,i+1);
            }
        }

        return ans;
    }
};