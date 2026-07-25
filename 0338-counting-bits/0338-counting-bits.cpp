class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int>ans;

        for(int i=0;i<=n;i++){
            int ct=0;
            int x=i;
            while(x>0){
                x=x&(x-1);
                ct++;
            }
            ans.push_back(ct);
        }
        return ans;
    }
};