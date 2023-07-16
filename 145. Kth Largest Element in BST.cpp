#include <bits/stdc++.h> 
/************************************************************
    Following is the Binary Search Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
int ans  = -1;
void func(TreeNode<int> *t, int k, int &pt)
{
    if(!t){
        return;
    }

    func(t->right,k,pt);
    pt++;
    if(pt==k) ans = t->data;
    func(t->left, k,pt);

}

int KthLargestNumber(TreeNode<int>* root, int k) 
{
    // Write your code here.
    ans = -1;
    int pt = 0;
    func(root, k, pt);
    return ans;
}
