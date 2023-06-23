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
int ans = 0;
int funcDiameter(TreeNode<int> *t)
{
    if(!t) return 0;
    int leftD = 0; int rightD = 0;

    leftD = funcDiameter(t->left);
    rightD = funcDiameter(t->right);

    ans = max(ans, 1+leftD+rightD);
    return 1+max(leftD,rightD);

}

int diameterOfBinaryTree(TreeNode<int> *root)
{
	// Write Your Code Here.
    ans = 0;
    int temp = funcDiameter(root);

    if(ans>0)
        return ans-1;
    return ans; 

}
