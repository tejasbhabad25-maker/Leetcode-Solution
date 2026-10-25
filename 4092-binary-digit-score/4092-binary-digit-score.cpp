class Solution {
public:
    int calculateScore(int a, int b) {
        
        int ct_a=0;
        int n=a;
        while(n){
            if(n&1) ct_a++;
            n=n>>1;
        }

        int ct_b=0;
        n=b;
        while(n){
            if(n&1) ct_b++;
            n=n>>1;
        }

        if(ct_a>=ct_b){
            return 1LL*ct_a*ct_b;
        }
        return ct_b/ct_a;
    }
};