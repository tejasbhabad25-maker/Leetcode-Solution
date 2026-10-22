class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        
        // 1,2,3,1,1,3,1,2

        int n=nums.size();
        unordered_map<int,int>m;
        int ans=0;

        int l=0 , r=0;

        while(r<n){

            m[nums[r]]++;

            while(m[nums[r]]>k){
                m[nums[l]]--;
                l++;
            }

            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};