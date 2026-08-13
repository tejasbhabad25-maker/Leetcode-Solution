class MinStack {
public:
    MinStack() {
        
    }
    // first-> curr el , second->min till now
    stack<pair<int,int>>p;
    
    int min_el=INT_MAX;
    void push(int value) {

        if(p.empty()){
            p.push({value,value});
        }
        else{
            int min_el=min(value,p.top().second);
            p.push({value,min_el});
        }
    }
    
    void pop() {
        p.pop();
    }
    
    int top() {
        return p.top().first;
    }
    
    int getMin() {
        return p.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */