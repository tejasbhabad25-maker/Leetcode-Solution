class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int>ans;
        int n=nums.size();

        // 4,-3,-2,-7,8,2,-3,-1


        for(int i=0;i<n;i++){
            int idx=abs(nums[i])-1;

            if(nums[idx]<0){
                ans.push_back(abs(nums[i]));
            }
            nums[idx]=-nums[idx];
        }
        return ans;
    }
};