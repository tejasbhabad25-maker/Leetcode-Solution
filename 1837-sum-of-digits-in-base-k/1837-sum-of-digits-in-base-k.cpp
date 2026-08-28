class Solution {
public:
    int sumBase(int n, int k) {

        // we can convert any number to any base using same idea as converting dec->bin
        // here we don't need to build complete number then break it again to sum
        // instead do sum directly
        
        int sum=0;
        while(n>0){
            int rem=n%k;
            sum+=rem;
            n=n/k;
        }
        return sum;
    }
};