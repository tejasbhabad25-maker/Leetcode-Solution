class ProductOfNumbers {
public:
    vector<int> arr;
    ProductOfNumbers() { arr.clear(); }

    void add(int num) { arr.push_back(num); }

    int getProduct(int k) {
        int n = arr.size();
        long long pr = 1;
        for (int i = n - 1; i >= (n - k); i--) {
            pr = pr * arr[i];
        }
        return pr;
    }
    // 7  k=1
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */