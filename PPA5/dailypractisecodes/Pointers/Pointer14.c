
#include <stdio.h>

void main() {

    const int a=10;

    int b=20;

    int *const iptr = &a;

    printf("%d\n",*iptr);//10

    *iptr=30;

    printf("%d\n",*iptr);//30

}
