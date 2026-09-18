class Solution {
    public int differenceOfSum(int[] nums) {
        
        int el_sum=0;
        int dig_sum=0;

        for(int i=0;i<nums.length;i++){
            el_sum+=nums[i];

            int n=nums[i];
            while(n!=0){
                dig_sum+=(n%10);
                n=n/10;
            }
        }
        return Math.abs(el_sum-dig_sum);
    }
}