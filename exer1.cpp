#include <stdio.h>
#include "alistlib.h"
#include "bubble_sort.h"
#include "selection_sort.h"
#include "insertion_sort.h"
#include "Shellsort.h"
int main(){

    int n;
    scanf("%d",&n);
    int i,x;
    List L;
    makeNull(&L);
    for(i = 0; i<n; i++) {
        scanf("%d",&x);
        append(x,&L);
    }

    print(L);
    //bubbleSort(L.elements,L.size);
    //selectionSort(L.elements,L.size);
    //insertionSort(L.elements,L.size);
    //shellSort(L.elements,L.size);
    print(L);
    return 0;

}