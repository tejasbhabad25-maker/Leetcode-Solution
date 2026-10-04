class Solution {
public:
    bool checkValidString(string s) {
        
        // brute force
        // for every * in the s we have two options either take ) or  ( or ""
        // we can use the backtracking here to do that like check possibilities if anyone 
        // return true then YES otherwise NO
        // TC  -> O(3^n)

        // gives TLE




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
        


        
    }
};