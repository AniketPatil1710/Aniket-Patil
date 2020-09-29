#include <stdio.h>

void changeValue(int arr[]) {
    
    arr[1]=10;
}

void main() {

    int arr[5] = {10,20,30,40,50} ;

    changeValue(arr);

    printf("%d %d\n",*(arr+1),arr[1]);
}

/*
a)10 10
b)20 20
c)20 10
d)10 20
*/
