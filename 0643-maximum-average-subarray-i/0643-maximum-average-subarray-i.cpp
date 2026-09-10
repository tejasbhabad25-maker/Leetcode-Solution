class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        
        int n=arr.size();
        long long sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        double ans=(double)sum/k;
        int l=0 , r=k-1;
        while(r<n){
            
            sum-=arr[l];
            l++;
        
            r++;
            if(r>=n){
                break;
            }
            sum+=arr[r];
            ans=max(ans,(double)sum/k);
        }
        return ans;
    }
};