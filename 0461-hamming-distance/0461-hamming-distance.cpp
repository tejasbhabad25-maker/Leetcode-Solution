class Solution {
public:
    int hammingDistance(int x, int y) {
        // we want to ct the no. of different bits from x and y
        //  0 0 0 1
        //  0 1 0 0   total diff bits => 2
        // as we need to ct diff we will take x^y and ct the number of set bits
        if(x==y){
            return 0;
        }
        int n=(x^y);
        int ct=0;
        while(n!=0){
            n=(n &(n-1));
            ct++;
        }
        return ct;
    }
};