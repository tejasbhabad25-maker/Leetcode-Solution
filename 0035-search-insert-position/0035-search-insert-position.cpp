class Solution {
public:
    int searchInsert(vector<int>& arr, int tar) {
        
        int ans=lower_bound(arr.begin(),arr.end(),tar)-arr.begin();
        
        return ans;
    }
};