class MyCircularDeque {
public:

    // we can also use LL but the operation will cost more time
    list<int>DLL;
    int SIZE,capacity;

    MyCircularDeque(int k) {
        // DLL.resize(k);
        capacity=k;
        SIZE=0;
    }
    
    bool insertFront(int value) {
        if(isFull()) return false;

        DLL.push_front(value);
        SIZE++;
        return true;
    }
    
    bool insertLast(int value) {
        if(isFull()) return false;

        DLL.push_back(value);
        SIZE++;
        return true;
    }
    
    bool deleteFront() {
        if(isEmpty()) return false;

        DLL.pop_front();
        SIZE--;
        return true;
    }
    
    bool deleteLast() {
        if(isEmpty()) return false;

        DLL.pop_back();
        SIZE--;
        return true;
    }
    
    int getFront() {
        if(isEmpty()) return -1;
        return DLL.front();
    }
    
    int getRear() {
        if(isEmpty()) return -1;
        return DLL.back();
    }
    
    bool isEmpty() {
        return SIZE==0;
    }
    
    bool isFull() {
        return SIZE==capacity;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */