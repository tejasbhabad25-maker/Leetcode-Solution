class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                nums[i]=-1;
            }
        }
        
        unordered_map<long long,int>m;
        long long sum=0;
        int k=0;
        int max_len=0;

        for(int i=0;i<n;i++){
            sum+=nums[i];

            if(sum==k){
                max_len=max(max_len,i+1);
            }
            int rem=sum-k;
            if(m.find(rem)!=m.end()){
                int len=i-m[rem];
                max_len=max(max_len,len);
            }
             if(m.find(sum)==m.end()){
                m[sum]=i;
            }
        }
        return max_len;
    }
};