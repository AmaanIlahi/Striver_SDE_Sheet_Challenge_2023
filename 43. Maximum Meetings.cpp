#include <bits/stdc++.h> 
bool func(pair<int,pair<int,int>> A, pair<int,pair<int,int>> B)
{
    if(A.second.second == B.second.second)
        return A.first < B.first;    
     return A.second.second < B.second.second;
}

vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    
    vector <pair<int,pair<int,int> > > vp;
    int n = start.size();
    for(int i=0; i<n; i++)
    {
        vp.push_back({i+1,{start[i],end[i]}});
    }
    sort(vp.begin(), vp.end(), &func);
    vector <int> ans;

    int maxEndTime = vp[0].second.second;
    ans.push_back(vp[0].first);
    for(int i=1; i<n; i++)
    {
        if(vp[i].second.first > maxEndTime)
        {
            ans.push_back(vp[i].first);
            maxEndTime = vp[i].second.second;
        }
    }
    return ans;
}