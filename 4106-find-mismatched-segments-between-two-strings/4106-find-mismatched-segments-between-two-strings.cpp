class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        
        int i=0 , j=0;
        int n=s1.size();

        vector<vector<string>>ans;

        while(i<n){
            
            if(s1[i]!=s2[j]){
                string a="";
                string b="";

                while(s1[i]!=s2[j]){
                    a+=s1[i];
                    b+=s2[j];
                    i++; j++;
                }
                ans.push_back({a,b});
            }
            else{
                i++; j++;
            }
        }
        return ans;
    }
};