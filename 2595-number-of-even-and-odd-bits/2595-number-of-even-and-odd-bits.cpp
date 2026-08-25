class Solution {
public:
    vector<int> evenOddBit(int n) {
        
        int even_ct=0;
        for(int i=0;i<32;i+=2){
            if(n & (1<<i)){
                even_ct++;
            }
        }

        int odd_ct=0;
        for(int i=1;i<32;i+=2){
            if(n & (1<<i)){
                odd_ct++;
            }
        }
        return {even_ct,odd_ct};
    }
};