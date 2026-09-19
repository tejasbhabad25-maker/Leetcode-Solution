class Solution {
public:
    int totalFruit(vector<int>& arr) {
        
        unordered_map<int,int>m;
        int n=arr.size();
        
        int l=0 , r=0;
        int ans=INT_MIN;
        while(r<n){

            m[arr[r]]++;

            while(m.size()>2){
                m[arr[l]]--;

                if(m[arr[l]]==0){
                    m.erase(arr[l]);
                }
                l++;
            }
            // 1 1 1 2 3 3 3 4 4 4 4 
            ans=max(ans,r-l+1);    
            r++;
        }
        return ans;
    }
};