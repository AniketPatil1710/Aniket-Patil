//Pointer+charaacter

#include <stdio.h>

void main() {

    int a=10; // 100-103

    int *iptr = &a; //iptr[100]

    iptr = iptr + 'A' ;
// iptr+65=> 100+65(4) => 100+260 => 360
    
    printf("%p\n",iptr);
    printf("%d\n",*iptr);
    
}

pointer+integer
pointer + character
