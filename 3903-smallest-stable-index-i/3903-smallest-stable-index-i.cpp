class Solution {
public:

    vector<int>MAX(vector<int>arr){
        vector<int>ans;
        int max_el=INT_MIN;
        for(int i=0;i<arr.size();i++){
            max_el=max(max_el,arr[i]);
            ans.push_back(max_el);
        }
        return ans;
    }

    vector<int>MIN(vector<int>arr){
        int n=arr.size();
        vector<int>ans(n,0);
        int min_el=INT_MAX;
        for(int i=n-1;i>=0;i--){
            min_el=min(min_el,arr[i]);
            ans[i]=min_el;
        }
        return ans;
    }

    int firstStableIndex(vector<int>& arr, int k) {
        
        vector<int>prefix=MAX(arr);
        vector<int>suffix=MIN(arr);
        int n=arr.size();

        for(int i=0;i<n;i++){
            if(prefix[i]-suffix[i]<=k){
                return i;
            }
        }
        return -1;
    }
};