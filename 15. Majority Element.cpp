#include <bits/stdc++.h>

int findMajorityElement(int a[], int n) {
	// Write your code here.
	int majEl = a[0];
	int counter = 1;

	for(int i=1; i<n; i++)
	{
		if(a[i]==majEl)
		counter++;
		else counter--;

		if(counter == 0)
		{
			majEl = a[i];
			counter = 1;
		}
	}
	counter = 0;
	for(int i=0; i<n; i++)
	{
		if(a[i]==majEl)
		counter++;
	}

	if(counter > (n/2))
		return majEl;
	return -1;
}