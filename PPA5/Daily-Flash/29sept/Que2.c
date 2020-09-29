//write a program to take two characters from the user and take two characters pointer and store their addresses into it and perform pointer arithmetic (addition with 1 ) and explain the output.


#include <stdio.h>
void main()
{
    char ch1 , ch2 ;
    printf("enter the value of ch1 and ch2:\n");
    scanf(" %c %c",&ch1,&ch2);

    char *cptr1=&ch1;
    char *cptr2=&ch2;
    
    cptr1=cptr1+1;
    cptr2=cptr2+1;
    printf("%p\n",cptr1);
    printf("%p\n",cptr2);
    printf("%c\n",*cptr1);
    printf("%c\n",*cptr2);
}
