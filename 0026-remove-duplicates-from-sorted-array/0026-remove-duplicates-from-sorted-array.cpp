class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n=arr.size();

        int j=0;
        for(int i=0;i<n;i++){
            if(arr[i]==arr[j]){

            }
            else{
                arr[j+1]=arr[i];
                j++;
            }
        }
        return j+1;
    }
};