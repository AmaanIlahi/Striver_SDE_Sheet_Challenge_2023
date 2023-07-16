#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        
        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

************************************************************/
int ans = INT_MAX;

void func(BinaryTreeNode<int> *node, int x){

    if(!node) return;
    if(node->data >= x){
        ans = min(ans, node->data);
        func(node->left, x);
    } 
    if(node->data < x)
        func(node->right,x);
}

int findCeil(BinaryTreeNode<int> *node, int x){
    // Write your code here.
    ans = INT_MAX;
    func(node, x);
    if(ans==INT_MAX) return -1;
    return ans;
}