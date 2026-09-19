class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty()){
            return 0;
        }

        unordered_set<int> s;

        for (int v : nums) {
            s.insert(v);
        }
        int ans = 1;
        for (int v : s) {

            if(s.find(v-1)==s.end()){
                int ct=1;
                while(s.find(v+1)!=s.end()){
                    ct++;
                    v++;
                }
                ans=max(ans,ct);
            }
        }
        return ans;
    }
};