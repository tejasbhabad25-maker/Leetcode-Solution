class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int n=arr.size();

        int longest=0;
        unordered_set<int>s;

        for(int i=0;i<n;i++){
            s.insert(arr[i]);
        }
        for(auto i:s){

            if(s.find(i-1)==s.end()){
                int ct=1;
                int x=i;

                while(s.find(x+1)!=s.end()){
                    ct++;
                    x=x+1;
                }
                longest=max(longest,ct);
            }
        }
        return longest;
    }
};