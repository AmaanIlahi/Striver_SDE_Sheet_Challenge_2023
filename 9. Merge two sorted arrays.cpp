#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& a1, vector<int>& a2, int m, int n) {
	// Write your code here.
	int i = m-1, j = n-1;
	int pt = m+n-1;
	while(i>=0 && j>=0)
	{
		if(a1[i]>=a2[j])
			a1[pt--] = a1[i--];
		if(a1[i]<a2[j])
			a1[pt--] = a2[j--];		
	}
	while(i>=0)
		a1[pt--] = a1[i--];
	while(j>=0)
		a1[pt--] = a2[j--];		

	return a1;
}