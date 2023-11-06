void selectionSort(ElementType A[],int n)
{
	int i,j;
	for( i = 0; i<n-1; i++)
	{
        for( j = i+1; j<n; j++){
            if(A[j] < A[i]) {
				ElementType tmp = A[i];
				A[i] = A[j];
				A[j] = tmp;
			}
        }
	}
}
