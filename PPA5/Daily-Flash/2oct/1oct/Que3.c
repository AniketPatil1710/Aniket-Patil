
#include <stdio.h>

void main() {
    
    int arr[5];

    int *iptr=arr;
    int sum=0;
    
    printf("Enter no. in array:\n");

    for(int i=0 ; i<5 ; i++)
    {
        scanf("%d",iptr+i);
    }

    printf("Printing elements in array:\n");

    for(int i=0 ; i<5 ; i++)
    {
        printf("|%d| ",*(iptr+i));
    sum=sum+*(iptr+i);
    }
    printf("\n");
    printf("Sum:%d\n",sum);
}
