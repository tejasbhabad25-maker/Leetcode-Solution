class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        
        int n=arr.size();
        int sum=0;
        int ans=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        int avg=sum/k;
        if(avg>=threshold){
            ans++;
        }

        int l=0 , r=k-1;
        while(r<n){
            sum-=arr[l];
            l++;

            r++;
            if(r>=n){
                return ans;
            }
            sum+=arr[r];

            avg=sum/k;
            if(avg>=threshold){
                ans++;
            }
        }
        return ans;
    }
};