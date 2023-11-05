void solve(ElementType a[],int n){
  bool check = true;
  int i,j;
	for(i = 0; i<n-1; i++)
	{	
		for(j = n-1; j > i; j--)
		{
			if(a[j] < a[j-1])
			{
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
				check = false;
			}
		}
		if(check) break; // cac ptu da dung thu tu.
	}
}
