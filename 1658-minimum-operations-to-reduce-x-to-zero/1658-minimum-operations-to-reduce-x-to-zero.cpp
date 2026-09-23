class Solution {
public:
    int minOperations(vector<int>& arr, int x) {
        
        /*

        approach 1 : we back solve using recursion 
        1,1,4,2,3  take 1 or take 3 then this wil continue
        in depth but will give TLE


        approach 2 : 
        assume we pick some els from left and some from right 
        now left + right = x 
        it may be possible that we don't take from a single side

        so left + right = x  , then the inner part will be sum-x
        as we need to minimise from both the side which means sum-x should be larger
        so we will find the longest subarray with sum-x

        now n-length of that subarray will gave the ans 

        so the problem breaks to longest subarray with sum=k  , where k=sum-x

        */

        int n=arr.size();
        int sum=0;
        for(int v:arr){
            sum+=v;
        }
        int k=sum-x;

        if(k<=0){
            return k==0?n:-1;
        }

        // as the arr don't contain -ve so we don't need prefix sum approach

        int l=0 , r=0;
        int length=0;
        int SUM=0;
        while(r<n){

            SUM+=arr[r];
            r++;

            while(l<r && SUM>k){
                SUM-=arr[l];
                l++;
            }
            
            if(SUM==k){
                length=max(length,r-l);
            }
            
        }

        return length==0?-1:n-length;
    }
};