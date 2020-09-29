//write a program to take a integer array from the user .display that array using pointer in forward and reverse direction.use the suitable arithmetic operator to transverse through the array usng pointer.

#include <stdio.h>

void main()
{
    int length;
    printf("enter the length of an array:\n");
    scanf("%d",&length);

    int array[length];
    printf("enter elements in an array:\n");

    for(int i=0;i<length;i++)
    {
        scanf("%d",&array[i]);
    }

    int *iptr = array;

    printf("printing array in forward direction:\n");

    for(int i=0;i<length;i++)
    {
        printf("|%d| ",*(iptr+i));
    }
    printf("\n");
    iptr=&(array[length-1]);
    printf("printing reverse array:\n");

    for(int i=0;i<length;i++)
    {
        printf("|%d| ",*(iptr--));
    }
    printf("\n");
}
