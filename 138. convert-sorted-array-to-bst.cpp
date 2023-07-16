#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;
        
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

TreeNode<int>* BstFunc(vector<int> &arr, int l, int r)
{
    if(l>r) return NULL;

    int m = l+(r-l)/2;
    TreeNode<int>* t = new TreeNode<int> (arr[m]);
    t->left = BstFunc(arr,l,m-1);
    t->right = BstFunc(arr,m+1,r);
}

TreeNode<int>* sortedArrToBST(vector<int> &arr, int n)
{
    // Write your code here.
    return BstFunc(arr,0,n-1);
}