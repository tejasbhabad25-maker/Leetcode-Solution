class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int>m;

        int l=0 , r=0 , mct=0;
        while(r<s.size()){

            // if the el is found in the map
            if(m.find(s[r])!=m.end()){
                // it is found in the map but what if it is not in the window thus we will check
                if(m[s[r]]>=l){
                    // if the s[r] already exist then we will move l to it's next idx
                    l=m[s[r]]+1;
                }
            }

            int len=r-l+1;
            mct=max(mct,len);

            m[s[r]]=r;
            r++;
        }
        return mct;
    }
};