class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        
        int n=arr.size();

        // cleaning the array
        // if we get any number greater size of arr or a negative number
        //  then mark it out of bound here we are using n+1
        for(int i=0;i<n;i++){
            if(arr[i]<=0 || arr[i]>n){
                arr[i]=n+1;
            }
        }

        // marks the presence
        for(int i=0;i<n;i++){
            int num=abs(arr[i]);

            if(num>arr.size()){
                continue;
            }

            if(arr[num-1]>0){
                arr[num-1]=-arr[num-1];
            }
        }
        

        // finding first missing positive
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                return i+1;
            }
        }

        // if number not exist in arr then it will bw n+1
        return n+1;
    }
};