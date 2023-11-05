int getInterval(int n){
  int k = 1;
	if(n/3 > k){
        k = (k*3) + 1;
    }
  return k;
}
void shellSort(ElementType a[],int n)
{
  int k = getInterval(n);
	while(k > 0 )
	{
		for(i = k; i<n; i++)
		{
			int val = a[i];
			for(j = i; j>=k && a[j-k] >= val; j-=k)
			{
				a[j] = a[j-k];
			}
			a[j] = val;
		}
        k = (k-1)/3;
	}
}
