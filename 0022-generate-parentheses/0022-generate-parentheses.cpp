class Solution {
public:

/*

    If we use temp as pass by value then after each call new value will be created and after it returns to the parent call the value of temp in parent call will not change it will have
    other copy and child will have other
    so if we use pass by value no need to use pop


*/

    void func(int n,vector<string> &ans,int open_ct,int close_ct,string &temp){

        if(open_ct==n && close_ct==n){
            ans.push_back(temp);
            return;
        }

        if(open_ct<n){
            temp.push_back('(');
            func(n,ans,open_ct+1,close_ct,temp);
            temp.pop_back(); // undo the '(' 
            // backtrack step
        }
        if(open_ct>close_ct){
            temp.push_back(')');
            func(n,ans,open_ct,close_ct+1,temp);
            temp.pop_back();
            // undo ')'
        }

    }

    vector<string> generateParenthesis(int n) {
        
        vector<string>ans;
        string temp;

        func(n,ans,0,0,temp);

        return ans;
    }
};