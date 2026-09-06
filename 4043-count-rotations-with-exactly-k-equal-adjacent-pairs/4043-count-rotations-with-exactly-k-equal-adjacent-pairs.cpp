class Solution {
public:
    int countRotations(string s, int k) {
        
        int n=s.size();
        int ans=0;

        for(int i=0;i<n;i++){
            int ct=0;
            for(int j=0;j<n-1;j++){
                if(s[(i+j)%n]==s[(i+j+1)%n]){
                    ct++;
                }
            }
            if(ct==k){
                ans++;
            }
        }
        return ans;
    }
};