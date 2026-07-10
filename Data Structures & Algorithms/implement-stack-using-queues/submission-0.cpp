#include <queue>

class MyStack {
private:
    std::queue<int> q;

public:
    MyStack() {}

    void push(int x) {
        q.push(x);                        // add to back
        for (int i = 0; i < (int)q.size() - 1; i++) {
            q.push(q.front());            // rotate: move front to back
            q.pop();
        }
    }

    int pop() {
        int val = q.front();              // newest element is at front
        q.pop();
        return val;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};