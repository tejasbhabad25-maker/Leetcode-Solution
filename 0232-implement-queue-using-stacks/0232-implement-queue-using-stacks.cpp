class MyQueue {
public:
    
    MyQueue() {
        
    }
    stack<int>a;
    stack<int>b;
    
    void push(int x) {
        if(a.empty()){
            a.push(x);
            return;
        }

        while(!a.empty()){
            b.push(a.top());
            a.pop();
        }
        a.push(x);
        while(!b.empty()){
            a.push(b.top());
            b.pop();
        }
    }
    
    int pop() {
        if(a.empty()){
            return -1;
        }
        int top_el=a.top();
        a.pop();
        return top_el;
    }
    
    int peek() {
        if(a.empty()){
            return -1;
        }
        return a.top();
    }
    
    bool empty() {
        return a.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */