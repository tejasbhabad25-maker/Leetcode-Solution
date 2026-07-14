class Solution {
public:

    bool isPossible(vector<int> &arr,int max_sum,int k){

        int sum=0 , ct=1;
        for(int i=0;i<arr.size();i++){
            if(sum+arr[i]>max_sum){
                sum=arr[i];
                ct++;
            }
            else{
                sum+=arr[i];
            }
        }
        if(ct>k){
            return false;
        }
        return true;
    }

    int splitArray(vector<int>& arr, int k) {
        int n=arr.size();

        int sum=0 , max_el=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            max_el=max(max_el,arr[i]);
        }

        int st=max_el;
        int end=sum;

        while(st<=end){
            int mid=st+(end-st)/2;

            if(isPossible(arr,mid,k)){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return st;

    }
};