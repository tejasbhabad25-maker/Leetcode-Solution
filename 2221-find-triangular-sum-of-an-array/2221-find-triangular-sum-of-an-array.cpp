class Solution {
public:
   
    int triangularSum(vector<int>& arr) {
        
        if(arr.size() == 1) {
            return arr[0];
        }

        vector<int> ans;
        for(int i = 0; i < arr.size() - 1; i++){
            ans.push_back((arr[i]+arr[i+1])%10);
        }
        return triangularSum(ans);
    }
};