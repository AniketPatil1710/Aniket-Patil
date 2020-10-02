#include <stdio.h>

void main() {
    
    int size;

    printf("enter length of array:");
    scanf("%d",&size);

    int arr1[size],arr2[size];

    int *iptr1=arr1;
    int *iptr2=arr2;
    
    printf("Enter elements in arr1:\n");
    
    for(int i=0 ; i<size ; i++)
    {
        scanf("%d",iptr1+i);
    }

    printf("Enter elemeents in arr2:\n");

    for(int i=0 ; i<size ; i++)
    {
        scanf("%d",iptr2+i);
    }

    int arr3[size];

    int *iptr3=arr3;

    for(int i=0 ; i<size ; i++)
    {
        *(iptr3+i) = *(iptr1+i)+*(iptr2+i);
    }
    printf("Printing third array:\n");

    for(int i=0 ; i<size ; i++)
    {
        printf("|%d| ",*(iptr3+i));
    }
    printf("\n");
}
