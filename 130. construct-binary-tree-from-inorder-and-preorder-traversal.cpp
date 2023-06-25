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
int searchIndex(vector<int> &inorder, int start, int end, int dataVal)
{
    for(int i=start; i<=end; i++)
    {
        if(inorder[i] == dataVal)
            return i;
    }
}

TreeNode<int> *buildTree(vector<int> &inorder, vector<int> &preorder, int start, int end, int &ind)
{
    if(start > end)
    return NULL;
    
    TreeNode<int> *t = new TreeNode<int>(preorder[ind]);
    int IndxSrch = searchIndex(inorder,start,end,preorder[ind]);
    ind++;

    t->left = buildTree(inorder,preorder,start,IndxSrch-1,ind);
    t->right = buildTree(inorder,preorder,IndxSrch+1,end,ind);

    return t;

}

TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{
    int ind = 0;
	return buildTree(inorder,preorder,0,inorder.size()-1,ind);
}