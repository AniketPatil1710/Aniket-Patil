//WAP that stores the address of the float array in a pointer and multiplies all the even Indexes of that array. All the array operations should be performed using the pointer in which the array address is stored.

#include<stdio.h>


void main()
{
    int size;
    printf("enter the size of an array:\n");
    scanf("%d",&size);

    float array[size];
    printf("enter the elements in an array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%f",&array[i]);
    }
    float *fptr=array;
    printf("multiplies of an even indexes is:\n");
    float mul=1.0;
    for(int i=0;i<size;i++)
    {
        if(i%2==0)
        {
            mul=mul*(*(fptr+i));
        }

    }
    printf("%f\n",mul);
}
