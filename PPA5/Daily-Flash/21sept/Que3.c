

#include<stdio.h>
void main()
{
    int length;
    printf("enter the length of an array:\n");
    scanf("%d",&length);

    int array[length];
    printf("enter the elements in an array:\n");
    for(int i=0 ; i<length ;i++)
    {
        scanf("%d",&array[i]);
    }

    int temp;
    int j=length-1;

    printf("swaping number in an array:\n");
    for(int i=0 ; i<(length)/2 ;i++)
    {
        
        {
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
        j--;
    }
    for(int i=0 ; i<length ; i++)
    {
        printf("|%d| ",array[i]); 
    }
    printf("\n");
}
