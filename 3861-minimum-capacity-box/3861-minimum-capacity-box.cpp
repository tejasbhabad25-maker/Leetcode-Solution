class Solution {
public:
    int minimumIndex(vector<int>& arr, int k) {
        
        int n=arr.size();
        int ans=INT_MAX;
        int idx=-1;
        for(int i=0;i<n;i++){
            if(arr[i]>=k){
                if(ans>arr[i]){
                    ans=arr[i];
                    idx=i;
                }
            }
        }
        return idx;
    }
};