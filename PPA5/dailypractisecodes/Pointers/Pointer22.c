// Substraction of pointer
//pointer - integer
#include <stdio.h>

void main() {

    int arr[] = {10,20,30,40,50};//100 104 108 112

    int *iptr=&(arr[1]);

    iptr=iptr-1;
    //   104-4 =100

    printf("%p\n",iptr);
    printf("%d\n",*iptr);

}

// valid => pointer -ineger/character
// invalid => pointer -flaot/double
