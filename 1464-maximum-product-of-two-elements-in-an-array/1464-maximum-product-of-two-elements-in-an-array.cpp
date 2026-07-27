class Solution {
public:
    int maxProduct(vector<int>& arr) {
        
        int max_el=INT_MIN , smax=INT_MIN;
        for(int x:arr){
            if(x>max_el){
                smax=max_el;
                max_el=x;
            }
            else if(x>smax){
                smax=x;
            }
        }
        long long ans=1LL*(max_el-1)*(smax-1);
        return ans;
    }
};