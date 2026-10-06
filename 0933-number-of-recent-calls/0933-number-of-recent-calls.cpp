class RecentCounter {
public:

    unordered_map<int,int>m;

    RecentCounter() {
        
    }
    
    int ping(int t) {
        m[t]++;

        int ans=0;
        for(int i=(t-3000);i<=t;i++){
            if(m.find(i)!=m.end()){
                ans++;
            }
        }
        return ans;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */