#pragma once

int Partition(int a[],int l,int r,int pivot){
	int i = l;
	int j = r;
	
	while(i<j){
		while(a[i] < pivot) i++;
		while(a[j] >= pivot) j--;
		if(i<j) {
			swap(a[i],a[j]);
		}
	}
	
	return i;
}
int findpivot(int a[],int l,int r){
	int firstkey = a[l];
	int i = l+1;
	while(i<=r && a[i] == firstkey) i++;
	if(i>r) return -1;
	else {
		if(a[l] > a[i]) return l;
		else return i;
	}
}
void Quicksort(int a[],int l,int r){
	int k,pivotindex,pivot;
	pivotindex = findpivot(a,l,r);
	if(pivotindex!=-1){
		pivot = a[pivotindex];
		k = Partition(a,l,r,pivot);
		Quicksort(a,l,k-1);
		Quicksort(a,k,r);
	}
}

