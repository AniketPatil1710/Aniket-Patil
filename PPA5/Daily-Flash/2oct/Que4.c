//write a program take size of array from user and declare two array of same size as user enters store both array address in two different pointer variable.and take array element from the user and copy all the odd elements into another array .
//Note1) all the user inputs in the array should be stored using a pointer.
//Note2)All the operations on the array should be done using pointer and derefferencing only.
//Input: lenghth:5
// Array elements:1 2 3 4 5
//Output: 
//first arra:1 2 3 4 5
//second array:1 3 5


#include <stdio.h>

void main() {
    
    int size;

    printf("Enter size of array:\n");

    scanf("%d",&size);

    int arr1[size];
    int arr2[size];

    int *iptr1=arr1;
    int *iptr2=arr2;

    printf("Enter the elements in array1:\n");
    for(int i=0 ; i<size ; i++)
    {
        scanf("%d",arr1+i);
    }
    
    int k=0;
    printf("Printing Array1:\n");
    for(int i=0 ; i<size ; i++)
    {
        printf("|%d| ",*(iptr1+i));
        if(*(iptr1+i)%2==1)
        {
            *(iptr2+k)=*(iptr1+i);
            k++;
        }
    }
    printf("\n");

    printf("Printing Array2:\n");
    for(int i=0 ; i<k ; i++)
    {
        printf("|%d| ",*(iptr2+i));
    }
    printf("\n");
}
