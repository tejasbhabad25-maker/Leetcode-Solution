class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int>m1;
        unordered_map<int,int>m2;

        for(int v:nums1){
            m1[v]++;
        }
        for(int v:nums2){
            m2[v]++;
        }

        int ct1=0;
        for(auto v:m1){
            if(m2.find(v.first)!=m2.end()){
                ct1+=v.second;
            }
        }

        int ct2=0;
        for(auto v:m2){
            if(m1.find(v.first)!=m1.end()){
                ct2+=v.second;
            }
        }
        
        return {ct1,ct2};
    }
};