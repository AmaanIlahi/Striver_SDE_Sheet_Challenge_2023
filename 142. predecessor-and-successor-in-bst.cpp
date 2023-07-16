#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

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

        ~BinaryTreeNode() {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/

pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    //pair <int,int> ans;
    int pred = -1, succ = INT_MAX;

    while(root)
    {
        if(root->data == key)
        {
            BinaryTreeNode<int>* lroot = root->left;
            while(lroot){
                pred = lroot->data;
                lroot = lroot->right;
            }
            BinaryTreeNode<int>* Rroot = root->right;
            while(Rroot){
                succ = Rroot->data;
                Rroot = Rroot->left;
            }
            break;
        }
        else if(root->data < key)
        {
            pred = max(pred, root->data);
            root = root->right;
        }
        else if(root->data > key)
        {
            succ = min(succ, root->data);
            root = root->left;
        }
    }

    if(succ == INT_MAX) succ = -1;
    //ans = {pred,succ};
    return {pred,succ};

}
