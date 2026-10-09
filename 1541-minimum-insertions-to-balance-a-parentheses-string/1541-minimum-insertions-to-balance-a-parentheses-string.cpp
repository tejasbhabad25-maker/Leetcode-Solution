class Solution {
public:
    int minInsertions(string s) {
        
        // ))(
        // ())
        // ))(

        int ct=0;
        int i=0;
        int ans=0;
        int n=s.size();

        while(i<n){

            if(s[i]=='('){  // (
                ct++;
                i++;
            }
            else{  //  )

                if(ct>0){
                    // means there was a opening bracket to balance this closing
                    ct--;
                }
                else{
                    // ct<=0 means we got  ) but there was no ( to balance it
                    ans++;
                }

                if(i+1<n && s[i+1]==')'){
                    i+=2;
                    // means we first get ) then we are checking if there is adjacent
                    // if it is then no need to insert anything just move i
                }
                else{
                    // )  for this the insertion should be 2 ( and ) => ())
                    ans++;
                    i++;
                }
            }
        }
        return ans+(2*ct);
    }
};