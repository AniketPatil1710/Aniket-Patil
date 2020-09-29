
#include <stdio.h>

void main() {
    
    int a=10;  //a[10]=>4bytes   b[20]=>4bytes   iptr[100]
    int b=20;
    
    int *iptr=&a;
    int arr[5]={10,20,30,40,50};
    //arr=&(arr[0])

    printf("%p\n",&a);
    printf("%p\n",&b);
    printf("%p\n",&iptr);
    printf("%p\n",arr);
    printf("%p\n",&(arr[0]));
}
