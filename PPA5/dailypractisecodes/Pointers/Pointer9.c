
#include <stdio.h>

void main() {

    int a=10 ;                  // Facebook=> Available <= a , b , c
                                // a access => propose
                                // Facebook => engage

    int *iptr1 , *iptr2 ;

    iptr1=&a;
    iptr2=&a;

    printf("%d\n",*iptr1); //10
    printf("%d\n",*iptr2); //10 Pointer is life

    *iptr1=15;
    *iptr2=30;

    printf("%d\n",*iptr1); //15

    printf("%d\n",*iptr2);//15


}
