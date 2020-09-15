
#include <stdio.h>

void main() {
    
    int num;

    printf("Enter number of elements in array:");
    scanf("%d",&num);

    int Array1[num];

    printf("Enter numbers in array:\n");

    for(int i=0 ;i<num ; i++)
    {
        scanf("%d",&Array1[i]);
    }
    int Array2[num];
    int j=0;
    for(int i=num-1 ; i>=0 ; i--)
    {
        Array2[i]=Array1[j];

        j++;
    }
    printf("Numbers in array1:\n");
    for(int i=0 ; i<num ; i++)
    {
        printf("%d\n",Array1[i]);
    }
    printf("Numbers in Array2:\n");
    for(int i=0 ; i<num ; i++)
    {
        printf("%d\n",Array2[i]);
    }

}
