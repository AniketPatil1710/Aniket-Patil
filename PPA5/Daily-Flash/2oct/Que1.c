//write a program to take two arrays of types int from the user.and print the arrays.Print addition of two arrays.
// e.g. *(array1+0) +*(array2+0),
//Note: If lenghth of both array is not same then print lenghth is not same to permorm addition operation(Use pointers for all operations )
//Input:Elements in array1:10 20 30 40 50
//Elements in array2:1 2 3 4 5

//Otput : Addition of two array: 11 22 33 44 55


#include<stdio.h>

void main()
{
    int size1,size2;
    printf("enter the length of array1:\n");
    scanf("%d",&size1);

    printf("enter the length of array2:\n");
    scanf("%d",&size2);

    int array1[size1],array2[size2];
    int *iptr1=array1;
    int *iptr2=array2;
    printf("enter the elements in an array1:\n");
    for(int i=0;i<size1;i++)
    {
        scanf("%d",(array1+i));
    }
    printf("enter the elements in an array2:\n");
    for(int i=0;i<size2;i++)
    {
        scanf("%d",(array2+i));
    }
    if(size1!=size2)
    {
        printf("size  both array are not same to perform addition operation\n");
    }
    else
    {
        printf("Sum of both arrays:\n");
        for(int i=0;i<size1;i++)
        {
            printf("|%d| ",*(array1+i)+*(array2+i));    
        
        }
    }
    printf("\n");
}
