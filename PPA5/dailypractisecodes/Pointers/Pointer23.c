// pointer - pointer

#include <stdio.h>

void main() {

    int arr[] = {10,20,30,40,50} ; // 100 104 108 112 116
                             //  0  1   2    3  4
    int *iptr1 = &(arr[1]); // [10][20][30][40][50]

    int *iptr2 = &(arr[4]);

    int ansptr= iptr2 - iptr1 ;
    
        //  116-104=12
        //substraction 
        //formula => (iptr2-iptr1)/sizeof(DTP) => 3
        //for that only you  can say that substraction of pointer is meaningful only when you are doing it on array
   printf("%d\n",ansptr);   
}
