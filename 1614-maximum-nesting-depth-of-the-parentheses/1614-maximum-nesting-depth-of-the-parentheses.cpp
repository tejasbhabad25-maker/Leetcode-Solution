class Solution {
public:
    int maxDepth(string s) {
        
        int ans=INT_MIN;
        int ct=0;
        for(char ch:s){
            if(ch=='('){
                ct++;
            }
            else if(ch==')'){
                ct--;
            }
            ans=max(ans,ct);
        }
        return ans;
    }
};