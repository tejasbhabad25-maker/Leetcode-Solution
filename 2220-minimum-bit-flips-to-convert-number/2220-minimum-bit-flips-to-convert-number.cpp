class Solution {
public:
    int minBitFlips(int start, int goal) {
        
        // we will be doing xor of a and b and cal the no. of 1 in that ans

        int ans=start^goal;
        int ct=0;
        while(ans!=0){
            ans=(ans & (ans-1));
            ct++;
        }
        return ct;
    }
};