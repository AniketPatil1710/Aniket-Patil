
#include <stdio.h>

void main() {
    
    int length;
    printf("enter  the length of arrays:\n");
    scanf("%d",&length);

    int array1[length],array2[length];

    printf("enter the elements of array1:\n");
    for(int i=0;i<length;i++)
    {
        scanf("%d",&array1[i]);
        
    }
    printf("enter the elements of array2:\n");
    for(int i=0 ; i<length ;i++)
    {
        scanf("%d",&array2[i]);
    }
    printf("Checking:\n");
    for(int i=0;i<length;i++)
    {
        if(array2[i]==(array1[i]*array1[i]))
        {
            printf("|1|  ");
        }
        else
        {
            printf("|-1|  ");
        }
    }
    printf("\n");
}
