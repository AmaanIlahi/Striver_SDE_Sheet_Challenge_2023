#include <bits/stdc++.h> 
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
vector<int> getPreOrderTraversal(TreeNode *root)
{
    // Write your code here.
    TreeNode *t = root;
    stack <TreeNode *> st;
    vector<int> ans;

    while(t || !st.empty())
    {
        while(t)
        {
            ans.push_back(t->data);
            if(t->right)
                st.push(t);
            t = t->left;            
        }
        if(!st.empty())
        {
            t = st.top();
            st.pop();
            t = t->right;
        }
    }
    return ans;

}