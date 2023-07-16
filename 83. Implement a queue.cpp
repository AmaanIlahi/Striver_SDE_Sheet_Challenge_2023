#include <bits/stdc++.h> 
class Queue {
public:
    vector <int> q;
    int f;
    int pt;

    Queue() {
        // Implement the Constructor
        q.resize(10000);
        f = 0;
        pt = -1;

    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function  
        if(pt<f) return 1;
        return 0;      
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        q[++pt] = data;
    }

    int dequeue() {
        // Implement the dequeue() function
        if(pt>=f)
        {
            return q[f++];
        }         
        return -1;
    }

    int front() {
        // Implement the front() function
        if(pt>=f) return q[f];
        return -1; 
    }
};