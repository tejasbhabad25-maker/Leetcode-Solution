class Solution {
public:
    int searchInsert(vector<int>& arr, int tar) {

        int n=arr.size();
        int ans=n;

        int st=0 , end=n-1;
        while(st<=end){
            int mid=st+(end-st)/2;

            if(arr[mid]>=tar){
                end=mid-1;
                ans=mid;
            }
            else{
                st=mid+1;
            }
        }
        return ans;
        
        return ans;
    }
};