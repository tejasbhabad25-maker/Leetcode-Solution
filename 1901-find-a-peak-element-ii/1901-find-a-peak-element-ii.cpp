class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();

        int st=0 , end=m-1;
        
        int row=-1;
        vector<int>ans;

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
            if(mid==0){
                if(arr[row][0]>arr[row][1]){
                    ans.push_back(row);
                    ans.push_back(mid);
                    return ans;
                }
                st=mid+1;
            }
            else if(mid==m-1){
                if(arr[row][m-1]>arr[row][m-2]){
                    ans.push_back(row);
                    ans.push_back(mid);
                    return ans;
                }
                end=mid-1;
            }
            else{
                if(max_el>arr[row][mid-1] && max_el>arr[row][mid+1]){
                ans.push_back(row);
                ans.push_back(mid);
                return ans;
                }
                else if(arr[row][mid-1] > max_el){
                    end=mid-1;
                }
                else{
                    st=mid+1;
                }
            }

        }
        return ans;
    }
};