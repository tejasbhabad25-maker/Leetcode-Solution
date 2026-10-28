class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        /*

        {1, 2}
        {1, 7}
        {2, 5}
        {3, 4}

        */
        
        vector<int>start;
        vector<int>End;

        for(int i=0;i<intervals.size();i++){
            start.push_back(intervals[i][0]);
            End.push_back(intervals[i][1]);
        }

        sort(End.begin(),End.end());
        // start will be sorted
        // 2 4 5 7
        // we need to find for start[i] how many elemnts in End are less than it so they will be non-intersecting 

        long long non_interesting=0;
        for(int i=0;i<start.size();i++){
            non_interesting+=lower_bound(End.begin(), End.end(), start[i])-End.begin();
        }
        long long n=intervals.size();
        long long  total=(1LL*n*(n-1))/2;
        return total - non_interesting;
    }
};