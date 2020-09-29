
//Arrithmatic opertions on pointer

//addition

#include <stdio.h>

void main() {


    int a=10 ;  //a[10] =>100-103
    int b=20 ; //b[20] =>104-107

    int *iptr=&a; // iptr[100] =>108-115
    char ch='A';

    //arr[0] => *(arr+0)
    //          *(arr) => pointing towards array at 0 index
    // pointer + int 

    int *ansptr=0;

    ansptr=iptr+2;//pointer +int
     
     //Formula:
     // pointer + integer*(sizeof(DTP))
     //iptr +1* sizeof(int)
     //100+4
     // 100 + 1*4
     // 104

    printf("%d\n",*ansptr);
    printf("%d\n",&iptr);
// *(ansptr)= *(104)
//        =value at (104)
//        =20

}
