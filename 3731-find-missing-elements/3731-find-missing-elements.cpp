class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int max_el=INT_MIN;
        int min_el=INT_MAX;

        for(int i=0;i<nums.size();i++){
            max_el=max(max_el,nums[i]);
            min_el=min(min_el,nums[i]);
        }
        unordered_set<int>s;
        for(int x:nums){
            s.insert(x);
        }
        vector<int>ans;
        // we don't need to check for max and min el
        for(int i=min_el+1;i<max_el;i++){
            if(s.find(i)==s.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};