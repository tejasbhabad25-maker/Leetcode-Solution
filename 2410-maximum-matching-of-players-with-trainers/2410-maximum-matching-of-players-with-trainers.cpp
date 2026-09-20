class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int i=0 , j=0;
        int ct=0;
        while(i<g.size() && j<s.size()){

            if(s[j]>=g[i]){
                ct++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return ct;
    }
};