class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        /*

        num=2 , sum=3  -> 30

        num=2 , sum=14 -> 95

        num=3 , sum=7 -> 700

        num=3 , sum=21 -> 993

        we can see that if we are able to get 9 at the left-most pos then we are 
        trying to get as much as possible

        */
        string ans="";

        while(num){
            if(sum>=9){
                ans+=to_string(9);
                sum-=9;
            }
            else{
                if(sum==0) ans+="0";
                else{
                    ans+=to_string(sum);
                    sum=sum-sum;
                }
            }
            num--;
        }
        // for num=1 , sum=10
        // first iteration -> ans->9 , sum=1 , num=0
        // but sum is not zero
        if(sum) return "";
        
        return ans;
    }
};