class Solution {
public:
    int pivotIndex(vector<int>& arr) {

        int n=arr.size();
        vector<int>psum(n+1,0);

        for(int i=1;i<=n;i++){
            psum[i]=psum[i-1]+arr[i-1];
        }
        int total=psum[n];

        for(int i=1;i<=n;i++){
            if(psum[i]==total-psum[i-1]){
                return i-1;
            }
        }
        return -1;
    }
};