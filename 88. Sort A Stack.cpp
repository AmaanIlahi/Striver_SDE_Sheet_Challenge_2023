#include <bits/stdc++.h> 

stack<int> SortFunc(stack <int> st)
{
	if(!st.empty())
	{
		int b = st.top();
		st.pop();
		st = SortFunc(st);

		stack <int> temp;
		while(!st.empty() && b < st.top())
		{
			temp.push(st.top());
			st.pop();
		}
		st.push(b);
		while(!temp.empty())
		{
			st.push(temp.top());
			temp.pop();
		}
	}
	return st;
}

void sortStack(stack<int> &stck)
{
	stck = SortFunc(stck);

}