
#include <stdio.h>

void main() {
    
    int a=10 ;

    int *iptr=&a ;  

    printf("%d\n",a);
    printf("%d\n",*iptr);

    *iptr=20;

    printf("%d\n",*iptr);

}


