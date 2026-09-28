class Solution {
public:
    int minOperations(vector<string>& logs) {
        
        int ct=0;
        int n=logs.size();
        for(int i=0;i<n;i++){
            if(logs[i]=="../"){
                ct--;
            }
            else if (logs[i]=="./"){
                continue;
            }
            else{
                if(ct<0) ct=0;
                
                ct++;
            }
        }
        if(ct<0) return 0;
        return ct;
    }
};