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
map<int,int> mp;
int ans = 0;
void func(TreeNode<int> *t, int level)
{
    if(!t) return;

    mp[level]++;
    ans = max(ans, mp[level]);
    func(t->left,  level+1);
    func(t->right, level+1);
}

int getMaxWidth(TreeNode<int> *root)
{
    // Write your code here.
    mp.clear();
    ans = 0;
    func(root,0);
    return ans;

}