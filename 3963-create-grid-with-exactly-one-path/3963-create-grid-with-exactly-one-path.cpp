class Solution {
public:
    vector<string> createGrid(int m, int n) {
        
        vector<string>arr(m,string(n,'#'));

        for(int col=0;col<n;col++){
            arr[0][col]='.';
        }

        for(int row=0;row<m;row++){
            arr[row][n-1]='.';
        }

        return arr;
    }
};