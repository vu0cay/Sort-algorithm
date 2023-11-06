void insertionSort(ElementType A[],int n)
{
  int i;
	for( i = 1; i<n; i++)
	{
		int index = i;
		int val = A[i];
		while(A[index-1] > val && index > 0)
		{
			A[index] = A[index-1];
			
			index--;
		}
		A[index] = val;
	}

}
