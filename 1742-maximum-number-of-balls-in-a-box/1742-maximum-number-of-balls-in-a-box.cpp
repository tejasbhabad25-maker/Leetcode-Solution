class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {

        /* as constraint say highlimit max can be 100000 which gives sum as 1
        but for 99999 sum will be 45 so we need 46 box cause we can access
        45th at the 46 index as indexing starts from 0

        */
        vector<int>arr(46,0);

        for (int i = lowLimit; i <= highLimit; i++){
            int sum = 0;
            int num=i;
            while (num > 0){
                sum += num % 10;
                num = num / 10;
            }
            arr[sum]++;
        }
        
        int ans=INT_MIN;
        for(int i=0;i<46;i++){
            ans=max(ans,arr[i]);
        }
        return ans;
    }
};