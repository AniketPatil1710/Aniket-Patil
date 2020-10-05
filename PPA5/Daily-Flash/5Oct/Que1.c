
#include <stdio.h>

void main(){
    
    int row,column;

    printf("Enter number of columns you want:");
    scanf("%d",&column);

    row=column;
    printf("Enter number of rows:%d\n",row);

    int arr[row][column];

    printf("Enter elements in array:\n");

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<column ; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    printf("Printing Array:\n");
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<column ; j++)
        {
            printf("|%d| ",arr[i][j]);
        }
        printf("\n");
    }
    //Printing diagonal elements in array

    printf("Printing diagonal elements in array:\n");

    int sum=0;
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<column ; j++)
        {
            if(i==j)
            {
                printf("|%d| ",arr[i][j]);
                sum=sum+arr[i][j];
            }
        }
    }
    printf("\n");
    printf("Addition of diagonal elements in array:|%d|",sum);
    printf("\n");

    printf("Transpose of matrix:\n");

    for(int i=0 ; i<column ; i++)
    {
        for(int j=0 ; j<row ; j++)
        {
            printf("|%d| ",arr[j][i]);
        }
        printf("\n");
    }
}
