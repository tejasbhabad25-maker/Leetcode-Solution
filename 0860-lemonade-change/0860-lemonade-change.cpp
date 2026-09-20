class Solution {
public:
    bool lemonadeChange(vector<int>& arr) {
        
        int ct_5=0;
        int ct_10=0;
        int ct_20=0;
        int n=arr.size();

        for(int i=0;i<n;i++){
            if(arr[i]==5){
                ct_5++;
            }
            else if(arr[i]==10){
                if(ct_5==0) return false;
                ct_5--;
                ct_10++;
            }
            else{
                if(ct_5==0) return false;
                
                // we have two choices either give 10,5 or 5,5,5
                // so if ct_10 is zero then ans could be true
                // but if ct_5 is zero then it can't

                if(ct_10!=0){
                    ct_10--;
                    ct_5--;
                }
                else{
                    if(ct_5<3) return false;
                    ct_5-=3;
                }
            }
        }
        return true;
    }
};