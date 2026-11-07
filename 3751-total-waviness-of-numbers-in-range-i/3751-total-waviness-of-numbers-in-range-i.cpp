class Solution {
public:
    int totalWaviness(int num1, int num2) {
        long long count=0;
        for(int i=num1;i<=num2;i++){
            string ans=to_string(i);
            int n=ans.size();
            if(n<3){
                continue;
            }
            int j=1;
            while(j<n-1){
                if(ans[j-1]<ans[j] && ans[j]>ans[j+1]){
                    count++;
                }
                else if(ans[j-1]>ans[j] && ans[j]<ans[j+1]){
                    count++;
                }
                j++;
            }
        }
        return count;
        
    }
};