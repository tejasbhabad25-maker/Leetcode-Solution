class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        
        unordered_set<int>s;
        for(int v:nums){
            s.insert(v);
        }

        int i=k;
        for(auto v:s){
            if(s.find(i)==s.end()){
                return i;
            }
            i=i+k;
        }
        return i;
    }
};