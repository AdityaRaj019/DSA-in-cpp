#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
class MinStack {
    stack<long long> s;
    long long mini;
    long long curr;

public:
    MinStack() {
        mini = INT_MAX;
        curr = 0;
    }

    void push(int val) {
        if (s.empty()) {
            s.push(val);
            mini = val;
        } else {
            // curr = val;
            if (val < mini) {
                long long data = 2LL * val - mini;
                s.push(data);
                mini = val;
            } else {
                s.push(val);
            }
        }
    }

    void pop() {
        if (s.empty()) {
            return;
        }
        curr = s.top();
        if (curr < mini) {
            long long data = 2LL * mini - curr;
            mini = data;
            s.pop();
        } else {
            s.pop();
        }
    }

    int top() {
        if(s.empty()){
            return -1;
        }
        curr = s.top();
        if(curr<mini){
            return mini;
        }else{
            return curr;
        }
    }

    int getMin() {
        if(s.empty()){
            return -1;
        }
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

int main() {
      
    cout << "" << endl;
    return 0;
}