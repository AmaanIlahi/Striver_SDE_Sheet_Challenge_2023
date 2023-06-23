/*****************************************************

    Following is the Binary Tree node structure:
    
    class BinaryTreeNode {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;


            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if(left) 
                delete left;
            if(right) 
                delete right;
        }
    };

******************************************************/
bool CheckSymm(BinaryTreeNode<int>* a, BinaryTreeNode<int>* b)
{
    
    if(!a && !b) return true;    
    if(a && b && a->data == b->data)
    {
        return CheckSymm(a->left, b->right) && CheckSymm(a->right, b->left);    
    }
    return 0;
}

bool isSymmetric(BinaryTreeNode<int>* t)
{
    // Write your code here. 
    return CheckSymm(t, t);

}