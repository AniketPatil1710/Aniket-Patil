
#include <stdio.h>

void main() {

    int arr[5], i=0;

    while(i<5)
        arr[i]=++i;

    for(i=0; i<5 ; i++)
    {
        printf("%d ",arr[i]);
    }
}

/*
A)1,2,3,4,5
B)Garbage value, 1,2,3,4
C)),1,2,3,4
D)2,3,4,5,6
*/
