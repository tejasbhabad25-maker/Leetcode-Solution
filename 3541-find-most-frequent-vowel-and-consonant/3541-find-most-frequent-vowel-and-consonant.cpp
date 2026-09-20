class Solution {
public:
    int maxFreqSum(string s) {
        
        vector<int>arr(26,0);
        
        for(char ch:s){
            arr[ch-'a']++;
        }

        int vowel=0 , consonant=0;
        for(int i=0;i<26;i++){
            if(i==0 || i==4 || i==8 || i==14 || i==20){
                vowel=max(vowel,arr[i]);
            }
            else{
                consonant=max(consonant,arr[i]);
            }
        }
        return vowel + consonant;
    }
};