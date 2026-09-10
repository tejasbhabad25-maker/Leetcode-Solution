class Solution {
public:

    bool isVowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            return true;
        }
        return false;
    }

    int maxVowels(string s, int k) {
        
        int ans=0;
        int n=s.size();
        int ct=0;
        for(int i=0;i<k;i++){
            char c=s[i];
            if(isVowel(s[i])){
                ct++;
            }
        }
        ans=max(ans,ct);

        int l=0 , r=k-1;
        while(r<n){
            if(isVowel(s[l])){
                ct--;
            }
            l++;

            r++;
            if(r>=n){
                break;
            }
            if(isVowel(s[r])){
                ct++;
            }

            ans=max(ans,ct);
        }
        return ans;
    }
};