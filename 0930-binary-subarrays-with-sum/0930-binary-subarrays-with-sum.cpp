class Solution {
public:
    int numSubarraysWithSum(vector<int>& arr, int goal) {
        
        int sum=0;
        int n=arr.size();
        unordered_map<int,int>m;
        int ct=0;
        m[0]=1;

        for(int i=0;i<n;i++){
            sum+=arr[i];

            int rem=sum-goal;
            if(m.find(rem)!=m.end()){
                ct+=m[rem];
            }
            m[sum]++;
        }
        return ct;
    }
};