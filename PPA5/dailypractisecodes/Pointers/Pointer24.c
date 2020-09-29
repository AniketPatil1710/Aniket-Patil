
#include <stdio.h>

void main() {

    int arr[5] = {10,20,30,40,50} ;

    int *iptr1=&(arr[0]);
    int *iptr2=&(arr[3]);

    int a = 1-iptr1 ; //1-hexadecimals => negative // compiler => pointer -1 error: interger - pointer // adress will not be negative // neve be negative

    printf("%d\n",a);
}

// iptr+1
// 1+iptr
