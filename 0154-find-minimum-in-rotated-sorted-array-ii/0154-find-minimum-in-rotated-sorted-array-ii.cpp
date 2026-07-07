class Solution {
public:
    int findMin(vector<int>& arr) {
        int n=arr.size();
        int ans=INT_MAX;
        int st=0 , end=n-1;

        if(n==1){
            return arr[0];
        }

        while(st<=end){
            int mid=st+(end-st)/2;

            

            if(arr[st]==arr[end]){
                ans=min(ans,arr[st]);
                st++; end--;
                continue;
            }

            // left part sorted
            if(arr[st]<=arr[mid]){
                ans=min(ans,arr[st]); // if left part is sorted min will be first el
                st=mid+1;
            }
            // right part sorted
            else{
                ans=min(ans,arr[mid]);  // if right part is sorted min will be middle el
                end=mid-1;
            }
        }
        return ans;
        
    }
};