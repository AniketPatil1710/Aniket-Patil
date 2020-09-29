
#include <stdio.h>

void main() {
    
    int size ;

    printf("Enter number of elemenits in Array:");
    scanf("%d",&size);

    int Array[size];

    printf("Enter elements in Array:\n");

    for(int i=0 ; i<size ; i++)
    {
        scanf("%d",&Array[i]);
    }
    
    int count=0;
    int k=size;
    for(int i=0 ;i<=k ;i++ )
    {

        for(int j=i+1 ; j<=k ; j++)
        {
            if(Array[i]==Array[j])
            {
                Array[i]=Array[j];
                size--;
            }

        }
        
    }
    printf("Output:\n");
    for(int i=0 ; i<size ; i++)
    {
        printf("|%d| ",Array[i]);
    }
    printf("\n");
}
