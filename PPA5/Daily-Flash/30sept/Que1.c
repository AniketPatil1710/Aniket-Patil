//Write a program the element of an array in reverse order using a pointer.

#include <stdio.h>

void main()
{
    int size;
    printf("enter the size of an array:\n");
    scanf("%d",&size);

    int array[size];
    printf("enter the elements in an array;\n");

    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    int *iptr=&(array[size-1]);
    printf("printing new array in reverse order:\n");

    for(int i=0;i<=size-1;i++)
    {
        printf("|%d| ",*(iptr-i));
    }
    printf("\n");
}
