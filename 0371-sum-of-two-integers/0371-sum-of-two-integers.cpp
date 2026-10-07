class Solution {
public:
    int getSum(int a, int b) {
        /*
        sum = a + b

        a+b=a+b
        e^(a+b)=e^(a+b)

        a+b = ln(e^(a+b))

        a+b = ln(e^a * e^b);

        */

        // double mul = 1LL* exp(a) * exp(b);
        // double ans = log(mul);

        // return (int)ans;

        // INTEGER OVERFLOW



        // OPTIMAL APPROACH

        if(b==0){
            return a;
        }

        int sum=a^b;
        int carry=(a & b)<<1;

        return getSum(sum,carry);
        
    }
};