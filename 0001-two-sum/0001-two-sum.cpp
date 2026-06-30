class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>map;
        vector<int>ans;

        for(int i=0;i<nums.size();i++){
            int fir=nums[i];

            int sec=target-fir;
            if(map.find(sec)!=map.end()){
                ans.push_back(i);
                ans.push_back(map[sec]);
            }
            map[fir]=i;
        }
        return ans;
    }
};