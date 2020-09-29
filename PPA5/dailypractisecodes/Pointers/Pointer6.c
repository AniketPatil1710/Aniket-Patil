
#include <stdio.h>

void main() {

    int a=10;          //a[10 ] aress-100-103
    int *iptr=&a; //initialisatiaon of pointer  iptr[100] adress=200-207

    printf("%d\n",a);  //10
    printf("%p\n",iptr); //confusing
    printf("%d\n",*iptr);
    // *(iptr) => *(100) => value at(100) => 10
}
