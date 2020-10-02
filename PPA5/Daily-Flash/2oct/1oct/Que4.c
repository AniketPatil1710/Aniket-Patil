
#include <stdio.h>

void main() {
    
    int arr[10];

    int sum=0;

    int *iptr=arr;

    printf("Enter elements in array:\n");

    for(int i=0 ; i<10 ; i++)
    {
        scanf("%d",iptr+i);
    }

    printf("Printing elements in arr:\n");

    for(int i=0 ; i<10 ; i++)
    {
        printf("|%d| ",*(iptr+i));

        if(i%2==0)
        {
            sum=sum+*(iptr+i);
        }
    }
    printf("\n");
    printf("Sum at even index:%d\n",sum);
}
