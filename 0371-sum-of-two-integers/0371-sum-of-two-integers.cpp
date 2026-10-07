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

        /* a=9 and b=11
        a -> 1001
        b -> 1011

        now we want the sum of the bits means
        1 + 0 -> 1
        0 + 1 -> 1
        0 + 0 -> 0
        1 + 1 -> 1 and carry 1

        and we add that carry in the left bit
        this is the normal method we do for addition using bit

        now we can see that for x-or will be suitable and for carry &
        but we need to add carry in the left
        so we will shift that carry to the left
        and will do same operation till we get the carry=0

        */

        if(b==0){
            return a;
        }

        int sum=a^b;
        int carry=(a & b)<<1;

        return getSum(sum,carry);
        
    }
};