class Solution {
public:
    int integerReplacement(int n) {
        
        /*
        3 -> 2

        5 -> 4
        7 -> 8 or 6
        9 -> 8
        11 -> 12 or 10
        13 -> 12
        15 -> 16

        19 -> +1 or -1
        21 -> -1

        15, 23, 27, 31, 39, 47, 55, 59, 63...

        */

        long long N=n;

        int ct=0;

        while(N!=1){
            if(N%2==0){
                N=N/2;
                ct++;
            }
            else{
                if(N==3){
                    N-=1;
                    ct++;
                    // 3%4 is equal to 3 so need to handle before
                }
                else if(N%4==3){
                    // +1 to make it divisible by 4
                    N+=1;
                    ct++;
                }
                else{
                    // when n%4=1 so make it divisible by 4 
                    N-=1;
                    ct++;

                }
            }
        }
        return ct;
    }
};