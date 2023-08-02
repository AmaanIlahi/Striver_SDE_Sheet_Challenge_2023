#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &a, int n)
{
	// Write your code here 
	int x = 0;
	for(int i=0; i<n; i++)
	{
		x = x^a[i]^(i+1);
	}

	int t = x;
	int rtMostbit = 0;
	while(t)
	{
		if(t&1 == 1)
		{			
			break;
		}
		else{
			t= t>>1;
		}
		rtMostbit++;
	}

	int set1 = 0;
	for(int i=0; i<n; i++)
	{
		if( (a[i] & (1<<rtMostbit)) > 0) set1 ^= a[i];
		if( ((i+1) & (1<<rtMostbit)) > 0) set1 ^= (i+1);
	}
	
	for(int i=0; i<n; i++)
	{
		if(a[i]==set1)
			return {x^set1,set1};
	}
	return {set1,x^set1};

}
