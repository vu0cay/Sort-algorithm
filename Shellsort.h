
int getInterval(int n){
  int k = 1;
	if(n/3 > k){
        k = (k*3) + 1;
    }
  return k;
}
void shellSort(ElementType A[],int n)
{
  int k = getInterval(n);
	int i,j;
	while(k > 0 )
	{
		for(i = k; i<n; i++)
		{
			int val = A[i];
			for(j = i; j>=k && A[j-k] >= val; j-=k)
			{
				A[j] = A[j-k];
			}
			A[j] = val;
		}
        k = (k-1)/3;
	}
}
