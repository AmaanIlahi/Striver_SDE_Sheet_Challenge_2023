#include<bits/stdc++.h>
string reverseString(string &s){
	
	string ans="";
	string t = "";
	stack <string> st;

	for(int i=0; i<s.size(); i++)
	{
		if(s[i]==' ')
		{
			if(t != "")
			{
				st.push(t);
				t = "";				
			}			
		}
		else
		{
			t+= s[i];
		}
	}

	if(t != "")
	{
		st.push(t);
		t = "";				
	}	

	while(!st.empty())
	{
		ans += st.top();
		st.pop();
		ans+=" ";
	}	
	return ans;
}