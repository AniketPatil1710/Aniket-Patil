//write a program that take two array take size of array and elements of both arrays from the user and then check whwther the both arrays are equal or not.accesss the array element using pointer.
//(Hint:*(arr+0))
//Input:
//arr1:2 5 1 7 3
//arr2:3 5 1 2 7
//Output:Both array are equal

#include <stdio.h>

void main()
{
    int size;
    printf("enter the size of array:\n");
    scanf("%d",&size);
    int size1=size;
    int arr1[size],arr2[size1];
    int *iptr1 = arr1;
    int *iptr2 = arr2;

    printf("enter the elements in an array1:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",(arr1+i));
    }
    printf("enter the elements in array2:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",(arr2+i));
    }
    printf("Array1:\n");
    for(int i=0 ; i<size ; i++)
    {
        printf("|%d| ",*(iptr1+i));
    }
    printf("\n");
    printf("Array2:\n");
    for(int i=0 ; i<size1 ; i++)
    {
        printf("|%d| ",*(iptr2+i));
    }
    printf("\n");
    int count=0;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size1;j++)
        {
            if(*(arr1+i)==*(arr2+j))
            {
                count++;
                for(int k=j;k<size1;k++)
                {
                    *(arr2+k)=*(arr2+(k+1));
                }
                size1--;
            }

        }
    }
    if(count==size)
    {
        printf("both arrays are equal\n");
    }
    else
    {
        printf("arrays are not equal\n");
    }

}
