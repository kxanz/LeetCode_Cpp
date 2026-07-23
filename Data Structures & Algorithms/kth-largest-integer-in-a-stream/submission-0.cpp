class KthLargest {
    priority_queue<int, vector<int>, greater<int>> pq; // min heap
    int k;
public:
    KthLargest(int k, vector<int>& nums) : k(k) {
        for (int x : nums) 
        add(x);
    }
    
    int add(int val) {
        pq.push(val);
        if (pq.size() > k) {
            pq.pop();
        }
        return pq.top();
    }
};
