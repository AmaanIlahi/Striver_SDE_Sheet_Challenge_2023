#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int heightBT(TreeNode<int> *t)
{
    if(!t)
    return 0;

    int lDepth = heightBT(t->left);
    int rDepth = heightBT(t->right);
    return 1+max(lDepth,rDepth);    
}

void preorder(TreeNode<int> *t, int level, vector<int> &ans)
{
    if(!t)
    return;

    if(ans[level]==-1)
        ans[level] = t->data;
    preorder(t->left, level+1, ans);
    preorder(t->right, level+1, ans);
}

vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    int ht = heightBT(root);
    vector<int> ans(ht,-1);
    preorder(root, 0, ans);
    return ans;
}