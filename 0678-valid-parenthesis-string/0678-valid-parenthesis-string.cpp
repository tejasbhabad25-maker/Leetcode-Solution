class Solution {
public:
    bool checkValidString(string s) {
        
        // brute force
        // for every * in the s we have two options either take ) or  ( or ""
        // we can use the backtracking here to do that like check possibilities if anyone 
        // return true then YES otherwise NO
        // TC  -> O(3^n)

        // gives TLE



    /*

        // TWO STACK APPROACH
        // maintain two stacks one for () and other for *
        // the stack will store the indices not the char

        stack<int>st;
        stack<int>star;
        int n=s.size();

        for(int i=0;i<n;i++){
            if(s[i]=='*'){
                star.push(i);
            }
            else if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]==')'){
                if(!st.empty()){
                    st.pop();
                }
                else if(!star.empty()){
                    star.pop();
                }
                // while processing ) we need something like ( or * if none of them is present then INVALID
                else{
                    return false;
                }
            }
        }
        
        while(!st.empty() && !star.empty()){

            // consider *( 
            // st -> 1
            // star -> 0  => false

            // (((***
            //  st -> 0 1 2 
            // star -> 3 4 5 

            if(st.top() > star.top()){
                return false;
            }
            st.pop();
            star.pop();
        }

        // now consider ( while will not run as star is empty 
        // so check if anyone is st is empty
        // if star is non- empty we can do *=""

        if(!st.empty()){
            return false;
        }

        return true;
        

        */



        // OPTIMISED APPROACH
        // TC -> O(n) SC -> O(1)

        /*
            STRIVER WALI APPROACH

        instead of using stack , we can make an range for it 
        if we take an ct which increments on ( and dec on ) 
        then s will be balance at ct=0

        now when we get * we have three option -1 -> ) , 0 -> "" , +1 -> (
        and we can maintain that range

        */

        
        /*
            OTHER OPTIMAL AND EASY APPROACH (GREEDY)
        TC - O(n)   SC - O(n)

        left to right
        take Lct and  Lct++ for ( and  *
        else --

        right to left
        lake Rct and Rct++ for ) and * \
        else --


        and at any moment when any of it become -ve return false

        now ,
        s= )))((
        Lct = 0 then Lct-- will make -ve  -> false

        s=(()))
        Lct=0 then +1+1-1-1-1
        Lct=-1 then false;

        */

        int n=s.size();
        int Lct=0 , Rct=0;
        for(int i=0;i<n;i++){

            if(s[i]=='(' || s[i]=='*') Lct++;
            else Lct--;
            if(Lct<0) return false;

            if(s[n-i-1]==')' || s[n-i-1]=='*') Rct++;
            else Rct--;
            if(Rct<0) return false;
        }
        return true;
    }
};