class Solution {
public:

    int GCD(int a,int b){
        while(a!=0 && b!=0){

            if(a>b){
                a=a%b;
            }
            else{
                b=b%a;
            }


            if(a==0){
                return b;
            }
            if(b==0){
                return a;
            }

        }
        return -1;
    }

    int findGCD(vector<int>& arr) {
        int n=arr.size();

        int max_el=arr[0] , min_el=arr[0];
        for(int i=0;i<n;i++){
            max_el=max(max_el,arr[i]);
            min_el=min(min_el,arr[i]);
        }
        return GCD(max_el,min_el);
    }
};