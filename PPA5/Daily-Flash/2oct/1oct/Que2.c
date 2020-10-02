

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
    int *iptr1=array;
    int *iptr2=&array[0];
    for(int 
}
