class Solution {
public:
    int longestOnes(vector<int>& arr, int k) {

        int max_len=0;
        int l=0 , r=0;
        int ct=0;
        while(r<arr.size()){
            if(arr[r]==0){
                ct++;

                while(ct>k){
                    if(arr[l]==0){
                        ct--;
                    }
                    l++;
                }
            }
            int len=r-l+1;
            max_len=max(max_len,len);
            r++;
        }
        return max_len;
    }
};