class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int n=arr.size();

        int p_mul=1 , s_mul=1;
        int ans=INT_MIN;

        for(int i=0;i<n;i++){
            p_mul=p_mul*arr[i];
            ans=max(ans,p_mul);

            if(p_mul==0){
                p_mul=1;
            }
        }

        for(int i=n-1;i>=0;i--){
            s_mul=s_mul*arr[i];
            ans=max(ans,s_mul);

            if(s_mul==0){
                s_mul=1;
            }
        }
        return ans;
    }
};