class Solution {
public:

    long long total(vector<int> &arr , int Hours){
        long long totalH=0;
        for(int i=0;i<arr.size();i++){
            totalH = totalH + ceil( (double)arr[i] / (double)Hours);
        }
        return totalH;
    }


    int minEatingSpeed(vector<int>& arr, int h) {
        
        // finding max el in the arr
        int max_el=0;
        for(int i=0;i<arr.size();i++){
            max_el=max(max_el,arr[i]);
        }

        int st=1 , end=max_el;
        int ans=0;

        while(st<=end){
            int mid=st+(end-st)/2;

            long long totalH=total(arr,mid);

            if(totalH<=h){
                ans=min(ans,mid);
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return st;

        //return ans;
    }
};