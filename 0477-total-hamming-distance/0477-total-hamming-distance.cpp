class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        /*
        0 1 0 0
        1 1 1 0
        0 0 1 0
      -----------
        0 1 0 1

        in hamming distance we need that the two bits should be different
        now we can't do like take 2 using combination(nC2) and cal for each pair
        
        now see above e.g for i=0 (rightmost) all are 0s so no different pair can be form
        // i=1 0-1 (first 1) , 0-1 (second 1) can be form
           i=2 1-0 (first 1) , 1-0 (second 1) can be form

           so in general we do for i no_of_zero*no_of_one
        */
        int ct=0;
        int n=nums.size();

        for(int col=0;col<32;col++){
            int one_ct=0;
            int zero_ct;
            for(int i=0;i<n;i++){
                if(nums[i] & (1<<col)){
                    one_ct++;
                }
                zero_ct=n-one_ct;
            }
            ct+=(zero_ct*one_ct);
        }
        return ct;
    }
};