//Write  C program to take size and elementsfrom user of a array, if the element is even then make it odd or element is odd make it even using pointer and print the finqal array.(for making number even or odd add whether you want)
//Note:all the operations performed on the array should be done by pointer
//Input: 1 2 8 6 4
//output:2 3 9 7 5

#include <stdio.h>

void main() {
    
    int length;
    printf("Enter size of Array:\n");

    scanf("%d",&length);
    
    int array[length];

    int *iptr=array;
    printf("enter elements in an array:\n");

    for(int i=0 ; i<length ; i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0;i<length;i++)
    {
        if(*(iptr+i)%2==0)
        {
            ++*(iptr+i);
        }
        else
        {
            --*(iptr+i);
        }
    }
    printf("printing new array:\n");
    for(int i=0;i<length;i++)
    {
        printf("|%d| ",array[i]);
    }
    printf("\n");

}
