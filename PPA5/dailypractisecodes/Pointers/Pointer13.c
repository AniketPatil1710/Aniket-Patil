
#include <stdio.h>

void main() {

    const int a=10;//a is aniket
    int b=20;
    
    const int *const iptr=&a;//iptr is khushi

    int *iptr2=&a;

    iptr=&b;

    *iptr2=30;

     printf("%d\n",*iptr);

  //   iptr=&b;

//     printf("%d\n",*iptr);
}
