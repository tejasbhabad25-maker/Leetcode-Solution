class Solution {
public:
    vector<int> singleNumber(vector<int>& arr) {

        int n = arr.size();
        if (n == 2) {
            return arr;
        }

        /*
        1 = 001
        2 = 010
        1 = 001
        3 = 011
        2 = 010
        5 = 101

        0 1 1
        1 0 1
       -------
        1 1 0

        now the rightmost set bit in the ans is at the 2nd position(1st index).
        which means the two numbers are having diff bits

        so we will make two part of arr based on the bit they having on 2nd pos

        grp1(having 0) => 1 , 1 , 5
        grp2(having 1) => 2 , 3 , 2

        so , after taking the separate xor of two grps we get 3 and 5

        */
        int ans=0;
        for(int i=0;i<n;i++){
            ans=ans^arr[i];
        }
        // __builtin_ctz(x) returns the idx of righmost set bit
        int pos=__builtin_ctz(ans);

        int num1=0 , num2=0;
        for(int i=0;i<n;i++){
            
            // if the el is having 1 at pos idx
            if(arr[i] & (1<<pos)){
                num1=num1^arr[i];
            }
            else{
                num2=num2^arr[i];
            }
        }
        return {num1,num2};
    }
};