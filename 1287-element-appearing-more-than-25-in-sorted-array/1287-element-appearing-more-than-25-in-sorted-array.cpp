class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {

        int n=arr.size();
        if(n==1){
            return arr[0];
        }
        int ct=1;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1]){
                ct++;
            }
            else{
                ct=1;
            }
            if(ct>n/4){
                return arr[i];
            }
        }
        
        return -1;
    }
};