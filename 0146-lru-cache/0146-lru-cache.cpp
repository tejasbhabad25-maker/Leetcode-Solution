class LRUCache {
public:

/*
    Approach

    take a doubly linked list which stores the key 
    a map with key , pair of address of that key and value

    now we are placing the most recently used at front

*/

    list<int>dll;
    unordered_map<int,pair<list<int>::iterator , int>> m;
            //    key ,         address ,      value
    int n;

    LRUCache(int capacity) {
        n=capacity;
    }

    void makeRecentlyUsed(int key){

        // first delete that 
        dll.erase(m[key].first);

        dll.push_front(key);

        // after pushing the new address will be dll.begin
        m[key].first=dll.begin();
    }

    
    int get(int key) {
        
        // if key is not in the map
        if(m.find(key)==m.end()){
            return -1;
        }

        // if it present in the map
        // then make it most recently used and return the val

        makeRecentlyUsed(key);

        return m[key].second;
    }
    
    void put(int key, int value) {
        
        // if the key already exist then update the value and make makeRecentlyUsed
        if(m.find(key)!=m.end()){
            m[key].second=value;
            makeRecentlyUsed(key);
        }
        // if the key doesn't exist in the map so store it 
        else{
            dll.push_front(key);
            m[key]={dll.begin(),value};
            // as we are pushing to front then dll.begin() will give address of it
            n--;
        }

        // imagine n is 2 after two pushfront it will be 0 and after third it will be -1
        // so the old used will be at back
        if(n<0){
            int delete_key=dll.back();

            m.erase(delete_key);
            dll.pop_back();

            n++;
        }

    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */