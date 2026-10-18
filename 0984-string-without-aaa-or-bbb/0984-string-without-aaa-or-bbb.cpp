class Solution {
public:
    string strWithout3a3b(int a, int b) {
        

        string ans;

        while(a>0 || b>0){

            if(a>b){
                if(a>=2){
                    ans+="a";
                    ans+="a";
                    a--; a--;
                }
                else{
                    ans+="a";
                    a--;
                }

                if(b>=1){
                    ans+="b";
                    b--;
                }
            }
            else if(a==b){
                ans+="a";
                ans+="b";
                a--; b--;
            }
            else{
                if(b>=2){
                    ans+="b";
                    ans+="b";
                    b--; b--;
                }
                else{
                    ans+="b";
                    b--;
                }
                
                if(a>=1){
                    ans+="a";
                    a--;
                }
            }
        }
        return ans;
    }
};