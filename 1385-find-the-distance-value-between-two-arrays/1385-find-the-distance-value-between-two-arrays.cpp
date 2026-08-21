class Solution {
public:

    bool func(vector<int>& arr,int x,int d){

        // consider test case 1
        // 1 8 9 10

        int st=0 , end=arr.size()-1;
        while(st<=end){
            int mid=st+(end-st)/2;

            if(abs(x-arr[mid])<=d){
                return false;
            }
            // the moment for arr1[i] we got sub<=x we will exit and not inc. ct

            if(arr[mid] > x){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return true;
    }

    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        //  1 8 9 10
        //  -4  -3  6  10  20  30

        sort(arr2.begin(),arr2.end());

        int ct=0;
        for(int i=0;i<arr1.size();i++){
            if(func(arr2 , arr1[i], d)){
                ct++;
            }
        }
        return ct;
    }
};