
#include <stdio.h>

void main() {
    
    int num,min;

    printf("Enternumber of elements:");
    scanf("%d",&num);

    int Array[num];

    printf("Enter num:\n");
    for(int i=0 ; i<num ; i++)
    {
        scanf("%d",&Array1[i]);
    }

    printf("Printing Ascendig order:\n");

    for(int i=0 ; i<num ; i++)
    {
        
        for(int j=i+1 ; j<num ; j++)
        {
            if(Array[i]>Array[j])
            {
                int k;
                k=Array[i];
                Array[i]=Array[j];
                Array[j]=k;
            }
        }
       
    }
    for(int i=0 ; i<num ; i++)
    {
        printf("%d\n",Array[i]);
    }

}
