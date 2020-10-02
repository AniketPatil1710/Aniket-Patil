//write a program to take int array element from the user and print even number from them using a pointer . access  element using pointer(hint:*(arr+0))
//Input:23 12 56 277 122
//Outut:12 56 122


#include <stdio.h>

void main(){
    int size;
    printf("enter the size of an array:\n");
    scanf("%d",&size);

    int array[size];
    int *iptr=array;
    printf("enter the elements in an array:\n");

    for(int i=0;i<size;i++)
    {
        scanf("%d",iptr+i);
    }
    printf("printing even numbers from that array:\n");
    for(int i=0;i<size;i++)
    {
        if(*(iptr+i)%2==0)
        {
            printf("|%d| ",*(iptr+i));
        }
    }
    printf("\n");

}
