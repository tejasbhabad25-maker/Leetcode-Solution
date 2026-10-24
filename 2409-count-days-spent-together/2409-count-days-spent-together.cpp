class Solution {
public:

    int help(string s,vector<int>& Psum){

        int month=stoi(s.substr(0,2)); // MM
        int day=stoi(s.substr(3,2));   // DD

        return Psum[month-1]+day;
    }

    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        
        vector<int>arr={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        vector<int>Psum(13,0);
        Psum[1]=31; // january

        for(int i=2;i<13;i++){
            Psum[i]=Psum[i-1]+arr[i-1];
        }

        int arriveAliceDay=help(arriveAlice,Psum);
        int leaveAliceDay=help(leaveAlice,Psum);
        int arriveBobDay=help(arriveBob,Psum);
        int leaveBobDay=help(leaveBob,Psum);

        int ans = min(leaveAliceDay,leaveBobDay)-max(arriveAliceDay,arriveBobDay);

        return ans<0?0:ans+1;
    }
};