#include <bits/stdc++.h> 

void PermutationFunc(string s, int i, vector <string> &ans)
{
    if(i==s.size())
    {
        ans.push_back(s);
        return;
    }
    for(int j=i; j<s.size(); j++)
    {
        swap(s[i],s[j]);
        PermutationFunc(s, i+1, ans);
        swap(s[i],s[j]);
    }
}

vector<string> findPermutations(string &s) {
    // Write your code here.
    vector<string> ans;
    PermutationFunc(s, 0, ans);
    return ans;
}