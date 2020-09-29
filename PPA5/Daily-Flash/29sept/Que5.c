//write a program to take size and elements from the user of an array , if the elements is even then add 10 to the element using pointer and print the final array.
// Input : 5
//1 2 3 4 5
//Output:1 12 3 14 5


#include <stdio.h>
void main()
{
    int size;
    printf("enter the size of an array:\n");
    scanf("%d",&size);

    int array[size];
    printf("enter elements in an array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    int *iptr=array;
    for(int i=0;i<size;i++)
    {
        if(*(iptr+i)%2==0)
        {
            *(iptr+i)=*(iptr+i)+10;
        }
    }
    printf("printing new array:\n");
    for(int i=0;i<size;i++)
    {
        printf("|%d| ",*(iptr+i));
    }
    printf("\n");
}
