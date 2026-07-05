class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();

        int st=0 , end=m-1;
        
        int row=-1;

        while(st<=end){
            // calculate max_el for each col
            int max_el=INT_MIN;
            int mid=st+(end-st)/2;

            for(int i=0;i<n;i++){
                if(arr[i][mid]>max_el){
                    max_el=arr[i][mid];
                    row=i;
                } 
            }
            
            int left=mid-1>=0?arr[row][mid-1]:-1;
            int right=mid+1<m?arr[row][mid+1]:-1;

            if(arr[row][mid]>left && arr[row][mid]>right){
                return {row,mid};
            }
            else if(arr[row][mid]<left){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return {-1,-1};
    }
};