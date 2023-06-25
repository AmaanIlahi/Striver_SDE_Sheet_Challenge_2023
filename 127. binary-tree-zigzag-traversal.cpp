#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

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

*************************************************************/

vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    vector <int> ans;
    if(!root) return ans;

    stack <BinaryTreeNode<int> *> S1, S2;
    S1.push(root);

    while(!S1.empty() || !S2.empty())
    {
        while(!S1.empty())
        {
            BinaryTreeNode<int> *t = S1.top();
            S1.pop();
            ans.push_back(t->data);
            if(t->left)
                S2.push(t->left);
            if(t->right)
                S2.push(t->right);            
        }
        while(!S2.empty())
        {
            BinaryTreeNode<int> *t = S2.top();
            S2.pop();
            ans.push_back(t->data);
            if(t->right)
                S1.push(t->right); 
            if(t->left)
                S1.push(t->left);           
        }
    }
    return ans;
}
