class Solution {
public:
    int minOperations(vector<int>& nums) {

        unordered_map<int, int> m;
        int n=nums.size();

        /*

        1 -> -1
        2 -> 1 (2) 1
        3 -> 1 (3) 0
        4 -> 2 (2,2) 1
        5 -> 2 (3,2) 2
        6 -> 2 (3,3) 0
        7 -> 3 (3,2,2) 1
        8 -> 3 (3,3,2) 2

        if freq = 1 -> -1
           freq%3=0 -> (freq/3)
           freq%3=2 -> 1+(freq-2)/3

        4 -> 2 (2,2)
        7 -> 3 (3,2,2) 
       10 -> 4 (3,3,2,2)
       13 -> 5 (3,3,3,2,2)
       16 -> 6 (3,3,3,3,2,2)

       if freq%3==2
       ct+=(freq-4)
       ct+=(freq/3)

        */

        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }

        int ct=0;

        for(auto v:m){
            int freq=v.second;
            if(freq==1){
                return -1;
            }
            else if(freq%3==0){
                ct+=(freq/3);
            }
            else if(freq%3==1){
                ct+=(2+(freq-4)/3);
                // take two 2's then rem. 3's
            }
            else if(freq%3==2){
                ct+=(1+(freq-2)/3);
                // take one 2 and rem 3's
            }
        }

        return ct;
    }
};