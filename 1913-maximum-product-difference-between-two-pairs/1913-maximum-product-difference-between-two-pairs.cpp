class Solution {
public:
    int maxProductDifference(vector<int>& arr) {
        
        int n=arr.size();

        // max el
        int max_el=INT_MIN;
        int max_idx=0;
        for(int i=0;i<n;i++){
            if(arr[i]>max_el){
                max_el=arr[i];
                max_idx=i;
            }
        }
        // second max
        int Smax_el=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>Smax_el && max_idx!=i){
                Smax_el=arr[i];
            }
        }

        // min el
        int min_el=INT_MAX;
        int min_idx=0;
        for(int i=0;i<n;i++){
            if(arr[i]<min_el){
                min_el=arr[i];
                min_idx=i;
            }
        }
        // sec min el
        int Smin_el=INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]<Smin_el && min_idx!=i){
                Smin_el=arr[i];
            }
        }

        long long ans = abs(((long long)max_el*Smax_el)-((long long)min_el*Smin_el));
        return ans;
    }
};