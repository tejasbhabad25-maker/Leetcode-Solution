class Solution {
public:
    long long countCommas(long long n) {
        // 1,000,000,000,000,000

        if(n<=999){
            return 0;
        }
        // 1 comma
        else if(n>999 && n<=1e6-1){
            // 999,999 = 1,000,000 - 1
           return n-1000+1;
        }
        // 2 comma
        else if(n>1e6-1 && n<=1e9-1){
            long long a=999000;
            // ((1e6-1)-1000+1)   contribute 1 comma
            long long b=2*(n-1e6+1); // contribute 2 commas
            return a+b;
        }
        // 3 comma
        else if(n>1e9-1 && n<=1e12-1){
            long long a=999000;
            // ((1e6-1)-1000+1)   1 comma range

            long long b=2*((1e9-1)-1e6+1); // 2 comma range

            long long c=3*(n-1e9+1);  // 3 comma range

            return a+b+c;
        }

        // 4 comma
        else if(n>1e12-1 && n<=1e15-1){
            long long a=999000;
            // ((1e6-1)-1000+1)   1 comma range

            long long b=2*((1e9-1)-1e6+1); // 2 comma range

            long long c=3*((1e12-1)-1e9+1);  // 3 comma range

            long long d=4*(n-1e12+1);  // 4 comma range

            return a+b+c+d;
        }
        // 5 comma for 1e15
        else{
            return 3998998998999005;
        }
        return 0;
    }
};