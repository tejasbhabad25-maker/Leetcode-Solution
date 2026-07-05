class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans;

        int i=0 , j=n-1;
        while(i<=j){
            
            if(abs(arr[i])>abs(arr[j])){
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