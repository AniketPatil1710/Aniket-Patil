//Write a program to reverse an array take size from user

#include <stdio.h>

void main()
{
    int length;
    printf("enter the length of an array:\n");
    scanf("%d",&length);


    int array[length];

    printf("enter the elements of an array:\n");

    for(int i=0;i<length;i++)
    {
        scanf("%d",&array[i]);

    }
    printf("reveresing of an array element:\n");
    int j=length-1;

    for(int i=0;i<length/2;i++)
    {
        int k=array[i];
        array[i]=array[j];
        array[j]=k;
        j--;
        
    }
    for(int i=0;i<length;i++)
    {
        printf("|%d| ",array[i]);
    }
    printf("\n");


}

//niharakulkarni@upi
