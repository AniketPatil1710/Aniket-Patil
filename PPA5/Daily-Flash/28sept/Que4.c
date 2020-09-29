//write a program that takes number of subjects from user(5) take marks from the user in an array using a pointer.obtained the percentage.

#include <stdio.h>

void main()
{
    int length;
    printf("enter the length of an array:\n");
    scanf("%d",&length);

    printf("enter the elements in an array:\n");
    int array[length];
    int *iptr = array;
    for(int i=0;i<length;i++)
    {
        scanf("%d",(iptr+i));
    }
    printf("printing elements of an array:\n");

    int sum=0;

    for(int i=0;i<length;i++)
    {
        printf("|%d| ",array[i]);
        sum = sum + array[i];
    }
    float percentage;
    printf("\n");

    percentage = (sum*100.0)/(100*length);
    printf("percentage :%lf\n",percentage); 
}

