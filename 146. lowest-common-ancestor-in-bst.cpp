#include <bits/stdc++.h>
using namespace std;

/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

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

template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

BinaryTreeNode<int>* LCAinBST(BinaryTreeNode<int>* root, int a, int b)
{
    while(root)
    {
        if(a < root->data && b < root->data)
            root = root->left;
        else if(a > root->data && b > root->data)
            root = root->right;
        else
            return root;
    }
    return NULL;
}

BinaryTreeNode<int>* insert(BinaryTreeNode<int>* root, int val)
{
    if(!root) return new BinaryTreeNode<int>(val);
    if(val < root->data) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}

int main()
{
    BinaryTreeNode<int>* root = NULL;
    vector<int> values = {20, 8, 22, 4, 12, 10, 14};
    for(int v : values) root = insert(root, v);

    vector<tuple<int,int,int>> tests = {
        {10, 14, 12},
        {4, 12, 8},
        {14, 8, 8},
        {10, 22, 20}
    };

    for(auto &[a, b, expected] : tests)
    {
        BinaryTreeNode<int>* lca = LCAinBST(root, a, b);
        int got = lca ? lca->data : -1;
        cout << "LCA(" << a << ", " << b << ") = " << got
             << " (expected " << expected << ") "
             << (got == expected ? "PASS" : "FAIL") << "\n";
    }
    return 0;
}
