class Solution {
public:
    int subarraysDivByK(vector<int>& arr, int k) {
        
        int n=arr.size();
        unordered_map<int,int>m;
        int sum=0;
        int ct=0;
        m[0]=1;
        for(int i=0;i<n;i++){

            sum+=arr[i];
            int rem=sum%k;
            if(rem<0){
                rem+=k;
            }
            
            if(m.find(rem)!=m.end()){
                ct+=m[rem];
            }
            m[rem]++;
        }
        return ct;
    }
};