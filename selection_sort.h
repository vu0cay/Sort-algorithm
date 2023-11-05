void solve(ElementType a[],int n)
{
	int i,j;
	for( i = 0; i<n-1; i++)
	{
        for( j = i+1; j<n; j++){
            if(a[j] < a[i]) swap(a[i],a[j]);
        }
	}
}
