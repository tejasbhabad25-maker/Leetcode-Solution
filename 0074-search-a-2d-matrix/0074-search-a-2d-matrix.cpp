class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int tar) {
        int n=arr.size();
        int m=arr[0].size();
        int st=0 ,end = (m*n)-1;

        while(st<=end){
            int mid=st+(end-st)/2;

            int row=mid/m;
            int col=mid%m;

            if(arr[row][col]==tar){
                return true;
            }
            else if(arr[row][col]<tar){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return false;
    }
};