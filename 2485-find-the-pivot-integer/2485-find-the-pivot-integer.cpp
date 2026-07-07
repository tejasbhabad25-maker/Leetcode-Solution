class Solution {
public:
    int pivotInteger(int n) {

        long long ans=(long long) n*(n+1)/2;
        ans=sqrt(ans);

        // consider ans=10 then it's sqrt will be 3.16 but will convert to 3
        // now , 3*3=9 not 10 also we are looking for complete sq. if not then -1
        if(ans*ans==(long long) n*(n+1)/2){
            return ans;
        }
        return -1;
    }
};