class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice,string arriveBob, string leaveBob) {

        // get two arr of size 365 mark 1 if they are +nt else 0
        // find intersection

        vector<int> months = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        vector<vector<int>> arr1(12, vector<int>(31, 0));
        vector<vector<int>> arr2(12, vector<int>(31, 0));

        int n = 5;

        int ala_mon = stoi(arriveAlice.substr(0, 2));
        int gela_mon = stoi(leaveAlice.substr(0, 2));

        int ala_date = stoi(arriveAlice.substr(n - 2, 2));
        int gela_date = stoi(leaveAlice.substr(n - 2, 2));

        // Mark Alice's days
        for (int m = ala_mon; m <= gela_mon; m++) {
            int start = (m == ala_mon) ? ala_date : 1;
            int end = (m == gela_mon) ? gela_date : months[m - 1];

            for (int d = start; d <= end; d++) {
                arr1[m - 1][d - 1] = 1;
            }
        }


        ala_mon = stoi(arriveBob.substr(0, 2));
        gela_mon = stoi(leaveBob.substr(0, 2));

        ala_date = stoi(arriveBob.substr(n - 2, 2));
        gela_date = stoi(leaveBob.substr(n - 2, 2));

        // Mark Bob's days
        for (int m = ala_mon; m <= gela_mon; m++) {
            int start = (m == ala_mon) ? ala_date : 1;
            int end = (m == gela_mon) ? gela_date : months[m - 1];

            for (int d = start; d <= end; d++) {
                arr2[m - 1][d - 1] = 1;
            }
        }

        int ct=0;
        for(int i=0;i<12;i++){
            for(int j=0;j<31;j++){
                if(arr1[i][j] && arr2[i][j]) ct++;
            }
        }
        return ct;
    }
};