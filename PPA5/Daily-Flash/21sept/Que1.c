

#include<stdio.h>

void main()
{
    
    int length;
    printf("enter length of an array:");
    scanf("%d",&length);

    char array[length];
    printf("enter the elements in an array:\n");

    for(int i=0 ; i<length ;i++)
    {
        scanf(" %c",&array[i]);
    }
    printf("Printing Pattern:\n");
    for(int i=0;i<length;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%c ",array[j]);
        }
        printf("\n");
    }
}
