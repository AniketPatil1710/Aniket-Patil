//write a program that take size of character array from user as well as array elements and toggle case of each elements in the array by defferencing//note:- all the operations performed on the array should be done by derefferencing.
//Enter size:4
//Input: C O r e
//Output:c o R E

#include <stdio.h>

void main()
{
    int size;
    printf("enter the size of an array:\n");
    scanf("%d",&size);

    char array[size];
    printf("enter the elements in an array:\n");

    for(int i=0;i<size;i++)
    {
        scanf(" %c",&array[i]);
    }
    char *cptr=array;
    for(int i=0;i<size;i++)
    {
        if(*(cptr+i)>=65 && *(cptr+i)<=90)
        {
            *(cptr+i)=*(cptr+i)+32;
        }
        else
        {
            *(cptr+i)=*(cptr+i)-32;
        }
    }
    printf("printing elements in an array:\n");
    for(int i=0;i<size;i++)
    {
        printf("|%c| ",*(cptr+i));
    }
    printf("\n");
    



}
