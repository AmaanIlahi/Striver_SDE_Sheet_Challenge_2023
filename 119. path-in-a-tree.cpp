#include <bits/stdc++.h> 
/*   
    template <typename T = int>
	class TreeNode
	{
		public:
		T data;
		TreeNode<T> *left;
		TreeNode<T> *right;

		TreeNode(T data)
		{
			this->data = data;
			left = NULL;
			right = NULL;
		}

		~TreeNode()
		{
			if (left != NULL)
			{
		  		delete left;
			}
			if (right != NULL)
			{
			 	delete right;
			}
		}
	};
*/
vector <int> ans;
bool func(TreeNode<int> *t, int x)
{
	if(!t) return 0;

	if(t->data == x)
	{
		ans.push_back(x);
		return 1;
	}
	bool left = func(t->left, x);
	bool right = func(t->right, x);
	if(left | right)
	{
		ans.push_back(t->data);
	}
	return left | right;
}

vector<int> pathInATree(TreeNode<int> *root, int x)
{
    // Write your code here.
	ans.clear();
	bool temp = func(root, x);
	reverse(ans.begin(),ans.end());
	return ans;
}
