
#include <stdio.h>

void main() {
    
     int a=10;   //variable constant
    
     const int *iptr=&a;//constant variable (here pointer is not constant)
    
    printf("%d\n",a);
    printf("%d\n",*iptr);

   // a=20;
   *iptr=20;

    printf("%d\n",a);
    printf("%d\n",*iptr);


}
