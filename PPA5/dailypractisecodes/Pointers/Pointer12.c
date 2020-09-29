
#include <stdio.h>

void main() {
    
     int a=10;
    int b=20;
    const int *iptr1=&a; //variable constant

    

   // int *ptr3=&a;

    *iptr1=20;
    printf("%d\n",a);
    printf("%d\n",*iptr1);
     printf("%d\n",*iptr2);

     iptr1=&b;

     
}
