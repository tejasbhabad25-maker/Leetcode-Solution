class Solution {
public:
    string removeDuplicateLetters(string s) {

        vector<int> freq(26, 0);
        vector<bool> visited(26, false);

        for (char ch : s) {
            freq[ch - 'a']++;
        }

        string st;

        for (char ch : s) {

            int idx = ch - 'a';
            freq[idx]--;

            // Already present
            if (visited[idx]) {
                continue;
            }

            while (!st.empty() &&
                   st.back() > ch &&
                   freq[st.back() - 'a'] > 0) {

                visited[st.back() - 'a'] = false;
                st.pop_back();
            }

            st.push_back(ch);
            visited[idx] = true;
        }

        return st;
    }
};