class Solution {
public:
    string addBinary(string a, string b) {
        
        string ans;
        int n1=a.size() , n2=b.size();

        int i=n1-1 , j=n2-1;
        int carry=0;
        int sum=0;
        while(i>=0 && j>=0){
            sum=(a[i]-'0')+(b[j]-'0');
            sum+=carry;

            carry=sum/2;
            sum=sum%2;
            ans.push_back(sum+'0');
            i--; j--;
        }
        while(i>=0){
            sum=(a[i]-'0');
            sum+=carry;

            carry=sum/2;
            sum=sum%2;
            ans.push_back(sum+'0');
            i--;
        }
        while(j>=0){
            sum=(b[j]-'0');
            sum+=carry;

            carry=sum/2;
            sum=sum%2;
            ans.push_back(sum+'0');
            j--;
        }

        if(carry){
            ans.push_back(carry+'0');
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};