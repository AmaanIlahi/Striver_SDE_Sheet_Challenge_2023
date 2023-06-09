#include <bits/stdc++.h>
bool isValidParenthesis(string s) {
  stack<char> st;
  map<char, char> mp;
  mp[')'] = '(';
  mp['}'] = '{';
  mp[']'] = '[';

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '(' || s[i] == '{' || s[i] == '[') 
    {
      st.push(s[i]);
    } 
    else 
    {
        if (st.empty())
            return false;

        if(st.top() != mp[s[i]])  
            return false;
        else
            st.pop();
    }  
  }
  
  if(!st.empty())
    return false;

    return true;
}