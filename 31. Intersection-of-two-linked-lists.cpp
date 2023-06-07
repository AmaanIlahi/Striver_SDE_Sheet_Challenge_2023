/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
        };

*****************************************************************/

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    int l1 = 0, l2 = 0;
    Node* a = firstHead;
    Node* b = secondHead;

    while(a)
    {
        l1++;
        a = a->next;
    }
    while(b)
    {
        l2++;
        b = b->next;
    }

    a = firstHead;
    b = secondHead;
    int diff = abs(l1-l2);
    if(l2>l1)
        swap(a,b);

    for(int i=0; i<diff; i++)
    a=a->next;

    while(a && b && a != b)
    {
        a=a->next;
        b=b->next;
    }
    return a;
}