class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        /*
            Approach 1:
            take k elements from left and store them in sum
            now after that remove one element from that left window(last ekement)
            ans add a rightmost number from the array store max_sum during each iteration
        */

        int sum=0 , max_sum=INT_MIN;
        
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        max_sum=max(sum,max_sum);

        int n=cardPoints.size();
        int right_idx=n-1;

        for(int i=k-1;i>=0;i--){
            sum-=cardPoints[i];
            sum+=cardPoints[right_idx];
            right_idx=right_idx-1;

            max_sum=max(max_sum,sum);
        }

        return max_sum;
    }
};