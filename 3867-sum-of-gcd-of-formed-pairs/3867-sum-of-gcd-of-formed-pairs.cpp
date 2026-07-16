class Solution {
public:

    int GCD(int a,int b){

        while(a>0 && b>0){
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

    long long gcdSum(vector<int>& arr) {

        vector<int>prefixGcd;
        
        int n=arr.size();
        int max_el=arr[0];

        for(int i=0;i<n;i++){
            max_el=max(max_el,arr[i]);

            prefixGcd.push_back(GCD(arr[i],max_el));
        }
        sort(prefixGcd.begin(),prefixGcd.end());

        int i=0 , j=prefixGcd.size()-1;
        long long sum=0;

        while(i<j){
            sum+=GCD(prefixGcd[i],prefixGcd[j]);

            i++; j--;
        }
        return sum;    
    }
};