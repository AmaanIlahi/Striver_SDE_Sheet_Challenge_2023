int removeDuplicates(vector<int> &a, int n) {
	// Write your code here.
	int j=0;	
	for(int i=1; i<n; i++)
	{
		if(a[i] != a[i-1])
		{
			a[++j] = a[i];
		}
	}

	return j+1;

}