class Solution {
public:
    int reverseDegree(string s) {
        
        vector<int>arr(26,0);
        // a => 26 = 26-0
        // b => 25 = 26-1
        // c => 24 
        // z => 1
        for(int i=0;i<26;i++){
            arr[i]=(26-i);
        }
        
        int n=s.size();
        long long sum=0;
        for(int i=0;i<n;i++){
            int idx=s[i]-'a';
            sum=sum+(1LL*arr[idx]*(i+1));
        }
        return int(sum);
    }
};