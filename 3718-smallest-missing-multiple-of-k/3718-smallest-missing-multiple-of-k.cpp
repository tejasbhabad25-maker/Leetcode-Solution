class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        
        unordered_map<int,bool>m;
        for(int v:nums){
            m[v]=true;
        }

        int i=k;
        for(auto v:m){
            if(m.find(i)==m.end()){
                return i;
            }
            i=i+k;
        }
        return i;
    }
};