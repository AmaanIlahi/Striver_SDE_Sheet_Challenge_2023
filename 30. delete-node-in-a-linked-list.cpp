#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

void deleteNode(LinkedListNode<int> *t) {
    // Write your code here.
    while(t->next && t->next->next )
    {
        t->data = t->next->data;
        t = t->next;
    }
    t->data = t->next->data;
    t->next = NULL;
}