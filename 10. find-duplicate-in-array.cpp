#include <bits/stdc++.h>

int findDuplicate(vector<int> &a, int n){
	
	for(int i=0; i<n; i++)
	{
		if(a[abs(a[i])-1] < 0)
			return abs(a[i]);
		else
			a[abs(a[i])-1] = -1 * a[abs(a[i])-1];
	}
	return -1;
}
