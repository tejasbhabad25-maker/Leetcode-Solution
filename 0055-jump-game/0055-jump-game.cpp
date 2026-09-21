class Solution {
public:
    bool canJump(vector<int>& nums) {

        int n=nums.size();
        int max_idx=0;

        // 1 2 4 1 1 0 2 5
        // 0 1 2 3 4 5 6 7

        /*
        here we have taken an arr and the idx so we are calculating max a person can jump
        the 0th person can jump only one unit the 1st 2 unit and the second 4 unit
        so the second can reach at 6th idx by passing 0

        but 
        // 1 2 3 1 1 0 2 5
        // 0 1 2 3 4 5 6 7

        here no one can pass that zero

        */

        for(int i=0;i<n;i++){
            if(i>max_idx) return false;
            max_idx=max(max_idx,i+nums[i]);
        }
        
        return true;
    }
};