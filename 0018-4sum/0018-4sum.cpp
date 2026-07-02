class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int tar) {
        int n=arr.size();

        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;

        for(int i=0;i<n;i++){

            if(i>0 && arr[i]==arr[i-1]){
                continue;
            }
            for(int j=i+1;j<n;j++){

                if(j>i+1 && arr[j]==arr[j-1]){
                    continue;
                }

                int k=j+1 , l=n-1;

                while(k<l){
                    long long sum=(long long)arr[i]+arr[j]+arr[k]+arr[l];
                    // Declaring 'sum' as long long does NOT guarantee that the addition
                    // is performed using long long arithmetic.
                    // Since all operands are int, the expression is evaluated as:
                    // int + int -> int
                    // The result may overflow before being assigned to 'sum'.
                    // By type-casting arr[i] to long long, the first operation becomes:
                    // long long + int -> long long
                    // After that, all remaining additions are also performed in long long,
                    // preventing overflow.
                    if(sum>tar){
                        l--;
                    }
                    else if(sum<tar){
                        k++;
                    }
                    else{
                        vector<int>temp={arr[i],arr[j],arr[k],arr[l]};

                        ans.push_back(temp);
                        k++; l--;

                        while(k<l && arr[k]==arr[k-1]){
                            k++;
                        }
                        while(k<l && arr[l]==arr[l+1]){
                            l--;
                        }
                    }
                }
            }
        }
        return ans;
        
    }
};