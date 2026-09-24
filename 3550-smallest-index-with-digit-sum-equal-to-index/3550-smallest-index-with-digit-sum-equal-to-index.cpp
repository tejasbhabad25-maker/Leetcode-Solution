class Solution {
public:
    int smallestIndex(vector<int>& arr) {
        
        int n=arr.size();
        int ct=0;

        for(int i=0;i<n;i++){
            int sum=0;
            int num=arr[i];
            while(num!=0){
                sum=sum+(num%10);
                num=num/10;
            }
            if(i==sum) return i;
        }
        return -1;
    }
};