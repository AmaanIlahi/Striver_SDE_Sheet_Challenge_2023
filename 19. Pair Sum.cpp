#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   vector<vector<int>> ans;
   sort(arr.begin(), arr.end());
   for(int i=0; i<arr.size(); i++)
   {
      int x = s-arr[i];
      int lb = lower_bound(arr.begin()+i+1, arr.end(), x) - arr.begin();
      int ub = upper_bound(arr.begin()+i+1, arr.end(), x) - arr.begin();
      if(ub > lb)
      {
         for(int j=1; j<=ub-lb; j++)
            ans.push_back({arr[i],x});
      }
   }
   return ans;
}