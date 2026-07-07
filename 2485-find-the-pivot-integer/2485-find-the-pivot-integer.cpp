class Solution {
public:
    int pivotInteger(int n) {
        int st=1 , end=n;

        while(st<=end){
            int mid=st+(end-st)/2;

            long long S_sum=(long long)mid*(mid+1)/2;
            long long L_sum=(long long)(n-mid+1)*(mid+n)/2;

            if(S_sum==L_sum){
                return mid;
            }

            if(S_sum<L_sum){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
};