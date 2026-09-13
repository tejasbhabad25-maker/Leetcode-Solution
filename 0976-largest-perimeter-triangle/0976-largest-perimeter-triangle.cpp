class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=0;
        for(int i=n-1;i>=2;i--){
            int c=nums[i];
            int b=nums[i-1];
            int a=nums[i-2];

            if(a+b>c){
                ans=max(ans,a+b+c);
            }
        }
        return ans;
        // 1 1 2 10
    }
};