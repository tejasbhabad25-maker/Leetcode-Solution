class Solution {
public:
    long long sumAndMultiply(int n) {

        int num=n;
        int sum=0;
        while(n>0){
            int rem=n%10;
            sum+=rem;
            n/=10;
        }

        int ans=0;
        int pow=1;
        while(num>0){
            int rem=num%10;
            if(rem!=0){
                ans=rem*pow + ans;
                pow=pow*10;
            }
            num=num/10;
        }
        long long res=(long long) ans*sum;
        return res;

    }
};