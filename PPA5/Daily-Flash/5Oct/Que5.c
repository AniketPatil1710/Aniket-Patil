

#include <stdio.h>

void main() {
    
    int row, column;

    printf("Enter number of column in array:");
    scanf("%d",&column);

    printf("Enter number of rows in array:");
    scanf("%d",&row);

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

    printf("Printing array:\n");
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<column ; j++)
        {
            printf("|%d| ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //swaping rows
    int k;
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<row ; j++)
        {
          k=arr[j][0];
          arr[j][0]=arr[j][column-1];
          arr[j][column-1]=k;
        }
    }
    printf("Printing modified array:\n");

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<column ; j++)
        {
            printf("|%d| ",arr[i][j]);
        }
        printf("\n");
    }


}
