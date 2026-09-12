class Solution {
public:

    int BS(vector<int>& arr,int tar){

        int low=0 , high=arr.size()-1;

        while(low<= high){

            int mid = low+ (high-low)/2;

            if(arr[mid] == tar){
                return mid;
            }
            else if(arr[mid] < tar){
                low= mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return -1;
    }

    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        
        vector<int>total;
        // total no. of the elements from lower to upper
        for(int i=lower;i<=upper;i++){
            total.push_back(i);
        }

        /*
        we will mark the els which are in total and also in nums to 0
            TWO options:
        (sort , bs => nlogn + logn)
        (nested for loop => n^2)
        */

        sort(nums.begin(),nums.end());

        for(int num:nums){
            int idx=BS(total,num);

            if(idx!=-1){
                total[idx]=0;
            }
        }
        // here we mark all the els from nums to zero in total vector

        vector<vector<int>>ans;
        int start=-1;

        for(int i=0;i<total.size();i++){
            
            // if element in total is non-zero
            if(total[i]!=0){
                // if start is -1 so start the interval
                // now for the next non-zero numbers till we get any zero start will be this
                if(start==-1){
                    start=total[i];
                }
            }
            // if element in total is zero
            else{
                // if start is -1 means the the interval is not started

                if(start!=-1){
                    ans.push_back({start,total[i-1]});
                    // if there is start of interval then end of the interval will be at the i-1 idx of the total

                    start=-1;
                    // now start new interval so start will be -1
                }
            }
        }

        if(start != -1)
        ans.push_back({start, total.back()});
        // for fisrt the last interval has started at 10 and total ends at 12 and there is no more zero after 12
        // so the last interval is not inserted thus we check after the for loop

        return ans;
    }
};