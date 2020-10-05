
#include <stdio.h>

void main() {
    
    int arr[3][3];

    printf("Enter elements in array:\n");

    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Printing Array:\n");

    for(int i=0 ; i<3 ; i++)
    {
          for(int j=0 ; j<3 ; j++)
          {
              printf("|%d| ",arr[i][j]);
          }
          printf("\n");
    }
    //printing prime numbers

    printf("Prime numbers in array:\n");
    int count;
    for(int i=0 ; i<3 ; i++)
    {
        
        for(int j=0 ; j<3 ; j++)
        {
            count=0;
            for(int k=1 ; k<=arr[i][j] ; k++)
            {
                if((arr[i][j])%k==0)
                {
                    count++;
                }
            }
            if(count==2)
            printf("|%d| ",arr[i][j]);
        }
     }
     printf("\n");
}
