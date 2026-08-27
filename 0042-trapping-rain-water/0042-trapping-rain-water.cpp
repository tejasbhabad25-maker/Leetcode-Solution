class Solution {
public:
    int trap(vector<int>& arr) {
        
        int n=arr.size();
        int l=0;
        int r=n-1;

        int l_max=0 , r_max=0 , total=0;
        while(l<r){
            if(arr[l]<=arr[r]){
                if(l_max > arr[l]){
                    total += (l_max-arr[l]);
                }
                else{
                    l_max=arr[l];
                }
                l++;
            }
            else{
                if(r_max > arr[r]){
                    total += (r_max-arr[r]);
                }
                else{
                    r_max=arr[r];
                }
                r--;
            }
        }
        return total;
    }
};