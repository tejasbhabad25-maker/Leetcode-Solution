class Solution {
public:
    int maxProductDifference(vector<int>& arr) {
        int n;

        int max_el=INT_MIN , Smax_el=INT_MIN;
        int min_el=INT_MAX , Smin_el=INT_MAX;

        for(int v:arr){

            if(v>max_el){
                Smax_el=max_el;
                max_el=v;
            }
            else if(v>Smax_el){
                Smax_el=v;
            }

            if(v<min_el){
                Smin_el=min_el;
                min_el=v;
            }
            else if(v<Smin_el){
                Smin_el=v;
            }
        }

        long long ans=abs((long long)max_el*Smax_el-(long long)min_el*Smin_el);
        return ans;
    }
};