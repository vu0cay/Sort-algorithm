
void bubbleSort(ElementType A[],int n){
  bool check = true;
  int i,j;
	for(i = 0; i<n-1; i++)
	{	
		for(j = n-1; j > i; j--)
		{
			if(A[j] < A[j-1])
			{
				int tmp = A[j];
				A[j] = A[j-1];
				A[j-1] = tmp;
				check = false;
			}
		}
		if(check) break; // cac ptu da dung thu tu.
	}
	//printf("\n");
	//for(i = 0; i<n; i++) printf("%d ",A[i]);
	//printf("\n");
}
