
// pointer + float

#include <stdio.h>

void main() {

    float farray[]={10.5,20.5,30.5,40.5,50.5};

    float *fptr=farray ; // farray=&(farray[0])

    fptr = fptr + 2.5;  // pointer + float
//      100+(2.5*4) => 110

    printf("%p\n",fptr);
    printf("%f\n",*fptr);//30


}

// invalid : pointer+float & pointer+double 
