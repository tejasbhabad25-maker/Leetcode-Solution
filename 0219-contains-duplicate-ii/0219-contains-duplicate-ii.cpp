class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& arr, int k) {
        
        int n=arr.size();
        if(n==1 || k==0){
            return false;
        }

        // 1 2 1 3 k=1
        unordered_set<int>s;
        s.insert(arr[0]);

        int l=0 , r=1;
        while(r<n){

            if(r-l>k){
                s.erase(arr[l]);
                l++;
                continue;
            }
            if((arr[l]==arr[r]) && abs(r-l)<=k){
                return true;
            }
            else{
                if(s.find(arr[r])!=s.end()){
                    return true;
                }
                s.insert(arr[r]);
                r++;
            }
            
        }
        return false;
    }
};