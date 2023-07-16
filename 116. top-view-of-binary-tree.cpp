#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

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

map<int, pair<int,int> > mp;
int firstInd = INT_MAX;
void func(TreeNode<int> *t, int hd, int level)
{
    if(!t) return;


    if(mp.find(hd) != mp.end())
    {
        pair<int,int> temp = mp[hd];
        if(temp.first > level)
            mp[hd] = {level,t->val};
    }
    else{
        mp[hd] = {level,t->val};
    }
    func(t->left,  hd-1, level+1);
    func(t->right, hd+1, level+1);
}

vector<int> getTopView(TreeNode<int> *root) {
    // Write your code here.
    mp.clear();
    func(root,0,0);

    vector<int> ans;
    for(auto i = mp.begin(); i!=mp.end(); i++)
    {
        ans.push_back(i->second.second);
    }
    return ans;
}