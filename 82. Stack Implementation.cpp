#include <bits/stdc++.h> 
// Stack class.
class Stack {
    
public:

    vector <int> v;
    int pt;
    int cap;
    
    Stack(int capacity) {
        // Write your code here.
        v.resize(capacity);
        pt = -1;
        cap = capacity;
    }

    void push(int num) {
        // Write your code here.
        if(pt < cap-1)
        {
            v[++pt] = num;
        }

    }

    int pop() {
        // Write your code here.
        if(pt >= 0){
            return v[pt--];
        }
        return -1;
    }
    
    int top() {
        // Write your code here.
        if(pt>=0) return v[pt];
        return -1;
    }
    
    int isEmpty() {
        // Write your code here.
        if(pt < 0) return 1;
        return 0;
    }
    
    int isFull() {
        // Write your code here.
        if(pt == cap-1) return 1;
        return 0;
    }
    
};