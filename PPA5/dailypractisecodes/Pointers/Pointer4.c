
#include <stdio.h>

void main() {
    
    int val=20;
    int *iptr=&val;

    float x=20.5;
    float *fptr=&x;

    char ch='A';
    char *cptr=&ch;

    double d=38.50 ;
    double *dptr=&d;
 //   **dptr => its stores adress of pointr // any type adress 8 bytes
 double **hptr=&dptr;
    
//some bytes 
// pointer whaterever always takes 8bytes on ram
//size of pointer = always 8byteds independependent on type of pointer
    printf("%ld\n",sizeof(iptr));//8
    printf("%ld\n",sizeof(fptr));//8
    printf("%ld\n",sizeof(cptr));//8
    printf("%ld\n",sizeof(dptr));//8
    
    printf("%ld\n",sizeof(hptr));
}
