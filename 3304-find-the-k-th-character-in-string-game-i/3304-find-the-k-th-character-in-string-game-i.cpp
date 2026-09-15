class Solution {
public:

    char func(string word,string shift,int k){
    
        if(word.size()>=k){
            return word[k-1];
        }
        word+=shift;
        shift.clear();
        for(char v:word){
            shift.push_back(v+1);
        }
        return func(word,shift,k);
    }

    char kthCharacter(int k) {

        string word="a";
        string shift="b"; 

        return func(word,shift,k);
    }
};