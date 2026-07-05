class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans;

        int i=0 , j=n-1;
        while(i<=j){
            if(arr[i]<0 && arr[j]<0){
                arr[i]=-arr[i];
                arr[j]=-arr[j];
            }
            else if(arr[i]<0){
                arr[i]=-arr[i];
            }
            
            if(arr[i]>arr[j]){
                ans.push_back(arr[i]*arr[i]);
                i++;
            }
            else{
                ans.push_back(arr[j]*arr[j]);
                j--;
            }

        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};