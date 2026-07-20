class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n1=ransomNote.size();
        int n2=magazine.size();

        if(n1>n2){
            return false;
        }
        vector<int>rfreq(26,0);
        vector<int>mfreq(26,0);

        for(char v:ransomNote){
            rfreq[v-'a']++;
        }
        for(char v:magazine){
            mfreq[v-'a']++;
        }

        for(int i=0;i<26;i++){
            if(rfreq[i]>mfreq[i]){
                return false;
            }
        }
        return true;
    }
};