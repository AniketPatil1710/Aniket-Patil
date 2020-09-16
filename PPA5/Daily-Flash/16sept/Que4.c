

#include <stdio.h>

void main() {
    
    int Array[10] = {2,5,3,7,8,1,4,6,9,0};

    printf("Element in Array:\n");

    for(int i=0 ; i<10 ; i++)
    {
        printf("%d  ",Array[i]);

    }
    printf("\n");

    printf("Printing sorted Array:\n");

    for(int i=0 ; i<10 ; i++)
    {
        for(int j=0 ; j<10 ; j++)
        {
            int temp;
            if(Array[i]<Array[j])
            {
                temp=Array[i];
                Array[i]=Array[j];
                Array[j]=temp;
            }
        }
    }

    for(int i=0 ; i<10 ; i++)
    {
        printf("%d  ",Array[i]);
    }
    printf("\n");
}
