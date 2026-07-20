class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>arr(26,0);

        for(char v:t){
            arr[v-'a']++;
        }
        for(char v:s){
            arr[v-'a']--;
        }
        for(int i=0;i<26;i++){
            if(arr[i]==1){
                return i+'a';
            }
        }
        return ' ';
    }
};