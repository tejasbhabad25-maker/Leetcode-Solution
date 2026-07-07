class Solution {
public:
    int mySqrt(int x) {
        
        int st=1 , end=x;
        while(st<=end){

            int mid=st+(end-st)/2;
            long long sq=(long long)mid*mid;

            if(sq<=x){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return end;
        
    }
};