#include <stdio.h>
#include "alistlib.h"
int main(){

    int n;
    scanf("%d",&n);
    int i,x;
    List L;
    makeNULL(&L);
    for(i = 0; i<n; i++) {
        scanf("%d",&x);
        append(x,&L);
    }

    print(L);
    printf("\n");
    //insertAt(10,5,&L);
   // popAt(8,&L);
    insertAt(8,100,&L);
    print(L);
    return 0;

}