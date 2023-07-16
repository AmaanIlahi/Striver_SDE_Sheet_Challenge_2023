#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	// Write your code here.
	
	public:

		stack <int> st;
		stack <int> NorSt;
		
		// Constructor
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{			
			// Write your code here.
			if(!st.empty())
			{
				stack <int> temp;
				while(!st.empty() && num > st.top())
				{
					temp.push(st.top());
					st.pop();
				}
				st.push(num);
				while(!temp.empty())
				{
					st.push(temp.top());
					temp.pop();
				}
			}
			else{
				st.push(num);
			}
			NorSt.push(num);
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			if(!NorSt.empty())
			{
				int n = NorSt.top();
				NorSt.pop();

				stack <int> temp;
				while(!st.empty())
				{
					int t = st.top();					
					st.pop();
					if(t==n) break;
					temp.push(t);
				}
				while(!temp.empty())
				{
					st.push(temp.top());
					temp.pop();
				}
				return n;
			}			
			return -1;						
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			if(!NorSt.empty())
			{
				int n = NorSt.top();
				return n;
			}			
			return -1;	
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			if(!st.empty())
			{
				int n = st.top();
				return n;
			}			
			return -1;	
		}
};