class Solution {
public:
    string removeKdigits(string s, int k) {

        stack<char>st;
        int n=s.size();

        if(k==n){
            return "0";
        }

        for(int i=0;i<n;i++){

            while(!st.empty() && k>0 && (st.top()-'0')>(s[i]-'0')){
                st.pop();
                k--;
            }
            st.push(s[i]);
        }
        
        // 1 2 3 4 5 6   for this there will only be pushing in stack so we need to remove last 3 els
        while(!st.empty() && k>0){
            st.pop();
            k--;
        }
        if(st.empty()){
            return "0";
        }

        // converting st to str
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        // if the ans is having the leading zeroes then it will be at back now
        while(ans.size()>0 && ans.back()=='0'){
            ans.pop_back();
        }
        if(ans.size()==0){
            return "0";
        }

        // reversing
        reverse(ans.begin(),ans.end());
        return ans;
    }
};