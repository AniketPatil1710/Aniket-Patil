
#include <stdio.h>

void main() {
    
    //derefferencing

    char ch='A';
    char *cptr=0; // *=>punctuator aur(hindi) pointer to
    
    cptr=&ch; // cptr=>150       ch=>'A' ch> 150-151  cptr=>ch

    printf("%c\n",ch);//A
    printf("%p\n",cptr);//150  //adress is a hexadecimal so is has in perticular manner we have
    printf("%p\n",&ch);//150
    printf("%c\n",*cptr);//A
    printf("%p\n",&cptr);
//we are using derefferance oprator access to =>*


}
