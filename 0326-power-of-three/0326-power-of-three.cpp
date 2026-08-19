class Solution {
public:
    bool isPowerOfThree(int n) {

        // there is a math trick if n is power of 3 then 
        // it should divide 3^19

        int num=1162261467;
        if(n>0 && num % n==0){
            return true;
        }
        return false;
    }
};