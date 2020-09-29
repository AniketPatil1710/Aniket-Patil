//Write a C program to demonstrate addition operation from pointer arithmatic onto an integer pointer and print the changes into address resolutions done by following operations.
//a.Incrementing by 2
//b.Incrementing by 3
//c.Incrementing by 1
//(Note: Derefferencing the pointer are not neccessary & Commenting of operation is expected)

#include <stdio.h>

void main()
{
    int num=0;  //address of num is 100
    printf("enter the value of num:\n");
    scanf("%d",&num);

    int *iptr=&num;  //iptr=100

    iptr=iptr+2;    //iptr=100+2*4=108
    printf("%p\n",iptr);//108

    iptr=iptr+3;//iptr=108+3*4=120
    printf("%p\n",iptr);//120

    iptr=iptr+1;  //iptr=120+1*4=124
    printf("%p\n",iptr);//124
}
/*
Output:
enter the value of num:
3
0x7ffd92c4d344
0x7ffd92c4d350
0x7ffd92c4d354
*/
