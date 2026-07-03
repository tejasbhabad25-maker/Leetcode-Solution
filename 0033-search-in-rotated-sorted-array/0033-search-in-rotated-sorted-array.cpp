class Solution {
public:
    int search(vector<int>& arr, int tar) {
        
        int n=arr.size();

        int st=0 , end=n-1;
        while(st<=end){
            int mid=st+(end-st)/2;

            if(arr[mid]==tar){
                return mid;
            }

            // left part is sorted
            if(arr[mid]>=arr[st]){
                // if the tar is between st and mid 
                if(arr[st]<=tar && arr[mid]>=tar){
                    end=mid-1;
                }
                else{
                    st=mid+1;
                }
            }
            // right part is sorted
            else{
                if(arr[mid]<=tar && tar<=arr[end]){
                    st=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
        return -1;
    }
};