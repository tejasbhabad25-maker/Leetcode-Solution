class Solution {
public:

    int sum(int n){
        int ans=0;
        while(n!=0){
            int rem=n%10;
            ans=ans+rem;
            n=n/10;
        }
        return ans;
    }

    int multiply(int n){
        int ans=1;
        while(n!=0){
            int rem=n%10;
            ans=ans*rem;
            n=n/10;
        }
        return ans;
    }

    bool checkDivisibility(int n) {
        
        int a=sum(n);
        int b=multiply(n);

        int total=a+b;

        return !(n%total);
    }
};