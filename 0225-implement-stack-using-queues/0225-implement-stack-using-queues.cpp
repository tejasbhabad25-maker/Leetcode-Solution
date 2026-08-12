class MyStack {
public:
    queue<int>q;

    MyStack() {

    }
    
    void push(int x) {
        int s=q.size();
        q.push(x);

        // imagine there is  1 2 3 already and we want to push 4  , so stack should look like 4 1 2 3
        // so at first size was 3 so push those 3 after pushing 4

        for(int i=0;i<s;i++){
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int a=q.front();
        q.pop();
        return a;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        if(q.size()==0){
            return true;
        }
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */