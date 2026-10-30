class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        
        /*

        a + b + c = 33
        consecutive

        (x-1) + x + (x+1) =33
        3x=33;
        x=11;

        */

        if(num%3) return {};

        long long x=num/3;
        return {x-1,x,x+1};

    }
};