#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };


************************************************************/
void inorder(BinaryTreeNode<int> *t, vector<int> &v)
{
    if(!t) return;
    
    inorder(t->left,v);
    v.push_back(t->data);
    inorder(t->right,v);
}
void preorder(BinaryTreeNode<int> *t, vector<int> &v)
{
    if(!t) return;

    v.push_back(t->data);    
    preorder(t->left,v);
    preorder(t->right,v);
}
void postorder(BinaryTreeNode<int> *t, vector<int> &v)
{
    if(!t) return;
    
    postorder(t->left,v);
    postorder(t->right,v);
    v.push_back(t->data);
}

vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    // Write your code here.
    vector<vector<int>> ans(3);
    inorder(root,ans[0]);
    preorder(root,ans[1]);
    postorder(root,ans[2]);
    return ans;
}