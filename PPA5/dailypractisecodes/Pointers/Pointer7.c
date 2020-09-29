
#include <stdio.h>

int main() {

    int a=10 , b=20 ;

    int *iptr=NULL ;  // NULL Pointer
    
    iptr=&a;

    printf("%p\n",iptr);
    printf("%d\n",*iptr);

    iptr=&b;

    printf("%p\n",iptr);
    printf("%d\n",*iptr);
    
}
