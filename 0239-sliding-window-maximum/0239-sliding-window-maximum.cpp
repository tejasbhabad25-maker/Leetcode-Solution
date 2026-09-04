class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        
        int n=arr.size();
        vector<int>ans;
        deque<int>q;

        // we will be storing the idx in deque in form of monotonic stack
        // stack will be in decreasing fashion

        for(int i=0;i<n;i++){

            // if the queue is storing more than k els pop the starting one
            if(!q.empty() && q.front()<=i-k){
                q.pop_front();
            }

            // monotonic maintaining condition
            while(!q.empty() && arr[q.back()]<=arr[i]){
                q.pop_back();
            }
            q.push_back(i);

            if(i>=k-1){
                ans.push_back(arr[q.front()]);
            }
        }
        return ans;
    }
};