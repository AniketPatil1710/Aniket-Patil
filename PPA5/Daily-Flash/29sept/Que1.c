//Write a program in c to store n elements in an array and print elements using pointer

#include <stdio.h>

void main() {
    
    int size;

    printf("Enter lenght of array:");
    scanf("%d",&size);

    int array[size];

    printf("Enter elements in array:\n");

    for(int i=0 ; i<size ; i++)
    {       
        scanf("%d",&array[i]);
    }
    
    int *ptr=array;

    printf("Printing elements in Array:\n");

    for(int i=0 ; i<size ; i++)
    {
        printf("|%d| ",*(array+i));
    }
    printf("\n");

}
