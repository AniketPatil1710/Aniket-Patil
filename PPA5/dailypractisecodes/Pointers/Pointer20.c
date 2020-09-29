//pointer + pointer

#include <stdio.h>

void main() {

    int arr[]={10,20,30,40,50};//100 104 108 112 116

    int *iptr1=&(arr[1]);

    int *iptr2=&(arr[4]);

    int *ansptr = iptr1 + iptr2;// 104+116 => 220  // hexadecimal + hexadecimal => value is big ( 220 adress is may be out of our RAM)

    printf("%p\n",ansptr);//ansptr[220]
    printf("%d\n",*ansptr);
}

// invalid : addition opf two pointers is also invalid
