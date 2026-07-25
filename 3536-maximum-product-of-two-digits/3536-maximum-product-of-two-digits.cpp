class Solution {
public:
    int maxProduct(int n) {
        
        int max_el=INT_MIN , smax_el=INT_MIN;
        while(n!=0){
            int rem=n%10;
            
            if(rem>max_el){
                smax_el=max_el;
                max_el=rem;
            }
            else if(rem>smax_el && max_el!=smax_el){
                smax_el=rem;
            }
            n=n/10;
        }
        return ((long long)max_el*smax_el);
    }
};