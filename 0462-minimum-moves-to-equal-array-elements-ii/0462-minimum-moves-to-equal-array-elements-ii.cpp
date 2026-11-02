class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
        // 1 2 9 10

        sort(nums.begin(),nums.end());
        int n=nums.size();

        long long med=nums[n/2];
        long long ans=0;

        for(int num:nums){
            ans+=abs(num-med);
        }

        return ans;
    }
};