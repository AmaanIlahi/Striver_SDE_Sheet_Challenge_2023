#include <bits/stdc++.h>

int func(int x, int n, int m)
{
	if(n==1) return x%m;

	long long int val = func(x,n/2,m);
	long long int res = (val*val)%m;
	if(n%2)
		return (x * res)%m;
	else
		return (res)%m;
}

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	return func(x,n,m);
}