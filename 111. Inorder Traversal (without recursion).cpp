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
vector<int> getInOrderTraversal(TreeNode *t)
{
    // Write your code here.
    stack <TreeNode *> st;
    vector <int> ans;

    while(t || !st.empty())
    {
        if(t)
        {
            if(!t->left)
            {
                ans.push_back(t->data);
                t = t->right;
            }
            else{
                st.push(t);
                t = t->left;
            }
        }
        else{
            TreeNode *temp = st.top();
            st.pop();
            ans.push_back(temp->data);
            t = temp->right;
        }        
    }
    return ans;

}