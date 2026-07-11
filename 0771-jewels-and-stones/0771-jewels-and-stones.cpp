class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>m;

        for(int i=0;i<stones.size();i++){
            m[stones[i]]++;
        }

        int ct=0;
        for(int i=0;i<jewels.size();i++){
            if(m.find(jewels[i])!=m.end()){
                ct+=m[jewels[i]];
            }
        }
        return ct;
    }
};