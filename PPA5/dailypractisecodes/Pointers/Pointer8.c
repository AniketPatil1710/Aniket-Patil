
#include <stdio.h>

void main() {

    int a=13 ;
    //Pointer is life.....
    
    //i want to change value of a using pointer
    
    int *iptr=0;  //pointer variable identifier =>. left side

    iptr=&a;

    printf("%d\n",*iptr); //dereference variable

    *iptr=15;

    int k=*iptr;   // read value
    // *iptr '=' Loacation value
    // 15 Read value
    //*(iptr)=> *(100)=>value at(100)=>15
    // left side value it consider as location vale
    // *(iptr) => *(100) store location into that 15 store 

    printf("%d\n",k);
    printf("%d\n",*iptr);
}
