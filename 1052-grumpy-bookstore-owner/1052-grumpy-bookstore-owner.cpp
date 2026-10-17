class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {

        int n = customers.size();

        int total = 0;

        for (int i = 0; i < n; i++) {
            if (grumpy[i] == 0) {
                total += customers[i];
            }
        }

        int Unsat=0;
        int max_Unsat=INT_MIN;

        for(int i=0;i<minutes;i++){
            if(grumpy[i]){
                Unsat+=customers[i];
            }
        }
        max_Unsat=max(max_Unsat,Unsat);

        int l=0 , r=minutes;
        while(r<n){

            if(grumpy[r]) Unsat+=customers[r];
            if (grumpy[l]) Unsat-=customers[l];

            max_Unsat=max(max_Unsat,Unsat);
            l++;
            r++;
        }
        return total+max_Unsat;
    }
};