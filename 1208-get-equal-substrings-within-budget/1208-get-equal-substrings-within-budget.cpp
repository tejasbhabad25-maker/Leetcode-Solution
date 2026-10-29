class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        
        // [2,2,2,2] cost=3
        int n=s.size();
        // vector<int>arr(n,0);

        // for(int i=0;i<n;i++){
        //     arr[i]=abs(s[i]-t[i]);
        // }

        int cost=0;
        int l=0 , r=0;
        int ans=0;

        while(r<n){

            // cost+=arr[r];
            cost+=abs(s[r]-t[r]);

            while(cost>maxCost){
                // cost-=arr[l];
                cost-=abs(s[l]-t[l]);
                l++;
            }

            ans=max(ans,r-l+1);
            r++;
            
        }
        return ans;
    }
};