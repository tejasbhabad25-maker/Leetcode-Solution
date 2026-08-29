class Solution {
public:
    char repeatedCharacter(string s) {

        unordered_set<char>set;
        for(int i=0;i<s.size();i++){
            if(set.find(s[i])!=set.end()){
                return s[i];
            }
            set.insert(s[i]);
        }
        return '-1';
    }
};