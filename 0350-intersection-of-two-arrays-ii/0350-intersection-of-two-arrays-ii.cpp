class Solution {
public:
    vector<int> intersect(vector<int>& arr1, vector<int>& arr2) {

        unordered_map<int,int>m;
        vector<int>ans;

        if (arr1.size() > arr2.size()) {
            for (int i = 0; i < arr1.size(); i++) {
                m[arr1[i]]++;
            }

            for (int i = 0; i < arr2.size(); i++) {
                if (m.find(arr2[i]) != m.end()) {
                    if(m[arr2[i]]>0){
                        ans.push_back(arr2[i]);
                        m[arr2[i]]--;
                    }
                }
            }
        }
        else {
            for (int i = 0; i < arr2.size(); i++) {
                m[arr2[i]]++;
            }

            for (int i = 0; i < arr1.size(); i++) {
                if (m.find(arr1[i]) != m.end()) {
                    if(m[arr1[i]]>0){
                        ans.push_back(arr1[i]);
                        m[arr1[i]]--;
                    }
                }
            }
        }
        return ans;
    }
};