class Solution {
public:
    bool isPossibleToSplit(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>m;

        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        for(auto v:m){
            if(v.second>2){
                return false;
            }
        }
        return true;
    }
};