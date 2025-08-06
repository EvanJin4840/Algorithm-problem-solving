#include <stack>
#include <iostream>

using namespace std;

class MyQueue {
public:
    stack<int> first, second;
    MyQueue() {
        
    }
    
    void push(int x) {
        first.push(x);
    }
    
    int pop() {
        while (first.size()) {
            second.push(first.top());
            first.pop();
        }
        int ret = second.top();
        second.pop();
        while (second.size()) {
            first.push(second.top());
            second.pop();
        }
        return ret;
    }
    
    int peek() {
        while (first.size()) {
            second.push(first.top());
            first.pop();
        }
        int ret = second.top();
        while (second.size()) {
            first.push(second.top());
            second.pop();
        }
        return ret;
    }
    
    bool empty() {
        if (first.size() == 0)
            return true;
        return false;
    }
};