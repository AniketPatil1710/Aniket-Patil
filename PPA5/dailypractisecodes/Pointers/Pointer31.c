
#include <stdio.h>

void main() {
    
    int arr1[5] = {10  ,20  ,30  ,40  ,50  } ;
    //             200  204  208  212  216   =>self given 219

    int arr2[5] = {60 , 70 , 80 , 90 , 100 } ; //imagined
    //             220  224  228  232  236

    int arr3[3] = { 10 , 20 , 30} ;
    //             194   198  202

    //Array address 

    printf("%p\n",arr1);

    printf("%p\n",arr2);

    printf("%p\n",arr3);

    //Gate address

    printf("%p\n",&arr1);
    
    printf("%p\n",&arr2);

    printf("%p\n",&arr3);

}
