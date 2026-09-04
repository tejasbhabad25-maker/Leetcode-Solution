class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        int n=nums.size();

        unordered_map<int,int>m;

        for(int v:nums){
            m[v]++;
        }

        vector<vector<int>>bucket(n+1); // n+1 rows in the bucket

        // placing all the elements in the bucket where rows are ct,cols are the num
        for(auto v:m){
            int num=v.first;
            int ct=v.second;
            bucket[ct].push_back(num);
        }

        // as we want the max freq which means it will be at last row so traverse from last to first
        vector<int>ans;
        for(int i=n;i>=0;i--){
            for(int num:bucket[i]){
                ans.push_back(num);

                if (ans.size() == k){
                    return ans;
                }
            }
        }
        return ans;
    }
};