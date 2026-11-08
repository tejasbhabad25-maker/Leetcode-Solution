class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        int ans=0;
        int n=nums.size();
        int ct=2 , max_ct=2;

        for(int i=2;i<n;i++){
            long long sum=nums[i-1]+nums[i-2];
            if(sum==nums[i]){
                ct++;
                max_ct=max(max_ct,ct);
            }
            else{
                ct=2;
            }
        }
        return max_ct;
    }
};