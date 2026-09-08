class Solution {
public:
    int countCommas(int n) {
        
        /*

        1,000
        10,000
        1,00,000
        99,999

        */
        int size=0;
    int num=n;
    while(num!=0){
        int rem=num%10;
        num=num/10;
        size++;
    }


    if(size==6){
        return 99001;
    }
    else if(size==5){
        return (n-1000+1);
    }
    else if(size==4){
        return (n-1000+1);
    }
    return 0;
    }
};