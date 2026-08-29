class Solution {
public:
    bool isIsomorphic(string s, string t) {

        int n1 = s.size();
        int n2 = t.size();
        if (n1 != n2) {
            return false;
        }

        vector<int> m1(256, 0);
        vector<int> m2(256, 0);

        for (int i = 0; i < n1; i++) {
            if (m1[s[i]] != m2[t[i]]) {
                return false;
            }
            m1[s[i]]=i+1;
            m2[t[i]]=i+1;
        }
        return true;
    }
};