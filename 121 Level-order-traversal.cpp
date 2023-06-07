#include <bits/stdc++.h> 
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{    
    queue <BinaryTreeNode<int>* > Q;
    if(root)
        Q.push(root);
    vector <int> ans;

    while(!Q.empty())
    {
        BinaryTreeNode<int> *t = Q.front();
        Q.pop();
        ans.push_back(t->val);
        if(t->left)
            Q.push(t->left);
        if(t->right)
            Q.push(t->right);

    }

    return ans;
}