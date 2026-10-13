class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        
        // 3 2 | 1
        // 5 4 3 | 2 1

        // 1,-1,2,-2,3,-3
        // 3 3 2 | 2 1 1

        // approach : sort the nums treat -ve as +ve

        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                nums[i]=-nums[i];
            }
        }

        sort(nums.begin(),nums.end(),greater<int>());

        long long a=0;
        long long b=0;

        int first=ceil(n/2.0);

        for(int i=0;i<first;i++){
            long long pr=nums[i]*nums[i];
            a=a+pr;
        }
        // 5 -> 3 , 2
        // 0 1 2
        // 3 4 


        for(int i=first;i<n;i++){
            long long pr=nums[i]*nums[i];
            b=b+pr;
        }

        return a-b;
    }
};