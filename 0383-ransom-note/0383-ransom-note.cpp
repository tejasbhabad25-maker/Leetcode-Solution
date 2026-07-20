class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        vector<int>freq(26,0);
        
        for(char v:magazine){
            freq[v-'a']++;
        }

        for(char v:ransomNote){
            if(freq[v-'a']==0){
                return false;
            }
            freq[v-'a']--;
        }
        return true;
    }
};