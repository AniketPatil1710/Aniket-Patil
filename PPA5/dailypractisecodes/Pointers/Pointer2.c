
#include <stdio.h>

void main() {
    
    int a=10;
 //   int ptr;
 //   ptr=&a;

    int *iptr=&a;      //always store adress only 
  

    printf("%d\n",a);    //10
    printf("%p\n",iptr); //10
    printf("%p\n",&a);   //adress
    printf("%d\n",*iptr);//garbagwe value 

}
