class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {

        // int n=nums.size();

        // vector<long long >psum(n,0);
        // vector<long long>ssum(n,0);

        // long long Psum=0 , Ssum=0;

        // for(int i=0;i<n;i++){
        //     Psum+=nums[i];

        //     psum[i]=Psum;

        //     ssum[n-i-1]=Ssum;
        //     Ssum+=nums[n-i-1];
        // }

        // int cnt=0;
        // for(int i=0;i<n-1;i++){
        //     if(psum[i]>=ssum[i]){
        //         cnt++;
        //     }
        // }
        // return cnt;


        //**
        //  we are comapring sum of the left with sum of the right or sum of left with total-left

        long long total=0;
        int n=nums.size();

        for(int i=0;i<n;i++){
            total+=nums[i];
        }

        long long leftsum=0;
        int ct=0;

        for(int i=0;i<n-1;i++){
            leftsum+=nums[i];

            if(leftsum>=(total-leftsum)) ct++;
        }
        return ct;

    }
};