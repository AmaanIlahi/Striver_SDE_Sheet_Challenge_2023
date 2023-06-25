#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &a)
{
	int m = a.size();
	int n = a[0].size();
	bool checkZeroFirstRow = false;
	bool checkZeroFirstCol = false;

	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(a[i][j] == 0)
			{
				if(i==0) checkZeroFirstRow = true;
				if(j==0) checkZeroFirstCol = true;
				a[0][j] = 0;
				a[i][0] = 0;							
			}
		}
	}

	for(int i=1; i<m; i++)
	{
		if(a[i][0] == 0)
		{
			for(int j=0; j<n; j++)
				a[i][j] = 0;
		}
	}
	for(int j=1; j<n; j++)
	{
		if(a[0][j] == 0)
		{
			for(int i=0; i<m; i++)
				a[i][j] = 0;
		}
	}
	if(checkZeroFirstRow)
	{
		for(int j=0; j<n; j++)
			a[0][j] = 0;
	}
	if(checkZeroFirstCol)
	{
		for(int i=0; i<m; i++)
			a[i][0] = 0;
	}
}