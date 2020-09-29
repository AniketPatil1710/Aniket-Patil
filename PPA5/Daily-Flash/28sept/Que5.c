//write a program that takes even array size .(array must be int type only) from user and find the average of only the odd index of the array
//note1: code should not go forward or teminate until user enters even array size.
//not2: code must access the next index index using increment operator only.(example:arr++)
// input:size=4
//enter data: 1,2,3,4
//output:2.

#include <stdio.h>

void main() {

    int size;

    printf("Enter size of array:");
    int a;
    do
    {   
        scanf("%d",&size);
    
    }while(size%2!=0);
    printf("Size of array is:%d\n",size);
    int array[size];
    printf("Enter elements in array:\n");
    for(int i=0 ; i<size ; i++)
    {
        scanf("%d",&array[i]);
    }
    int sum=0;
    int k=0;
    printf("Entered Elements are:\n");
    for(int i=0 ; i<size ; i++)
    {
        printf("|%d| ",array[i]);
        if(i%2==0)
        {
            sum=sum+array[i];
            k++;
        }

    }
    printf("\n");
    float avg;
    avg=(sum*1.0)/k;

    printf("Average is:%.2f\n",avg);
}
