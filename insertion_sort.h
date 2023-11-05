void solve(ElementType a[],int n)
{
  int i;
	for( i = 1; i<n; i++)
	{
		int index = i;
		int val = a[i];
		while(a[index-1] > val && index > 0)
		{
			a[index] = a[index-1];
			
			index--;
		}
		a[index] = val;
	}

}
