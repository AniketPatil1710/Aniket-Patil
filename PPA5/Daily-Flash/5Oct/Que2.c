
#include <stdio.h>

void main() {
    
    int arr[4][4];
    printf("Enter elements in array:\n");
    for(int i=0 ; i<4 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");

    printf("Printing matrix:\n\n");
    for(int i=0 ; i<4 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
            printf("%d| ",arr[i][j]);
        }
        printf("\n");
    }
    //searching maximum number in array
    int max=0;
    for(int i=0; i<4 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
    }
    printf("\n");
    printf("Maximum number in array is:|%d|\n",max);

}   
