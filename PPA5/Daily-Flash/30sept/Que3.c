
//Take an array of 10 integers and print elemets in all possible.

#include <stdio.h>

void main()
{
    int array[10];
    printf("enter the elements in an array:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("printing elements in 1st way:\n");
    for(int i=0;i<10;i++)
    {
        printf("|%d| ",array[i]);
    }
    printf("\n");
    printf("2nd way using pointer:\n");
    int *iptr=array;
    for(int i=0;i<10;i++)
    {
        printf("|%d| ",*(iptr+i));
    }
    printf("\n");
    printf("3rd way:\n");
    for(int i=0;i<10;i++)
    {
        printf("|%d| ",*(array+i));
    }
    printf("\n");
    printf("4th way:\n");
    for(int i=0;i<10;i++)
    {
        printf("|%d| ",i[array]);
    }
    printf("\n");

}
