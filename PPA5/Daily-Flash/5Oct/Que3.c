

#include <stdio.h>

void main() {
    
    int arr[3][3];

    printf("Enter the numbers in array:\n");

    for(int i=0 ; i<3 ;i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    int count=0;
    printf("Printing Array:\n");

    for(int i=0 ; i<3 ;i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            if(arr[i][j]<0)
            {
                printf("|%d| ",arr[i][j]);
                count++;
            }
            else
            {
                printf("|%d | ",arr[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");

    printf("count of negative numbers in array:|%d|\n ",count);

}
