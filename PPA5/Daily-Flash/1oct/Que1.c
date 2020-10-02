#include <stdio.h>

void main()
{
    int size;
    printf("enter the size of  an array:\n");
    scanf("%d",&size);

    int array1[size];
    int array2[size];
    printf("enter the elements in an array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array1[i]);
    }

    printf("Enter elements in array2:\n");

    for(int i=0 ; i<size ; i++)
    {
        scanf("%d",&array2[i]);
    }

    int *iptr=array1;

    printf("Printing elements in array1:\n");

    for(int i=0 ; i<size ; i++)
    {
        printf("arr1[%d]=|%d|\n ",i,*(iptr+i));
        printf("address:%p\n",iptr+i);
    }
    printf("\n");

    iptr=array2;

    printf("Printing elements in array2:\n");

    for(int i=0 ; i<size ; i++)
    {
        printf("arr2[%d}=|%d|\n ",i,*(iptr+i));
        printf("address:%p\n",iptr+i);
    }

}
