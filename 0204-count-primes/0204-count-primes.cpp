class Solution {
public:
    int countPrimes(int n) {

        /*
        1.consider all numbers are prime number from 2 to n.
        2. then , remove the multiple number from all the range of given number
        e.g.
        if we consider 2 as prime then don't include multiple of 2 same 3 (4 is multiple of 2) 5.
        3. at the end we only get prime number(count of prime number)
        */

        vector<int>arr(n+1,true);
        int ct=0;

        for(int i=2;i<n;i++){
            if(arr[i]){
                ct++;
            }

            for(int j=i*2;j<n;j=j+i){
                arr[j]=false;
            }
        }
        return ct;
    }
};