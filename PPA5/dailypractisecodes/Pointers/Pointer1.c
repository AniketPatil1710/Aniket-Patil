
#include <stdio.h>

void main() {

    int a=10 ; // 100-103 byte allocate to 10 integer a

    int *iptr; // iptr - adress of a emagine 100

    iptr=&a;


    printf("%d\n",a); //10

    printf("%p\n",iptr); // adress is integer it is integer of hexadicamal
    
    printf("%p\n",&a);  









}

